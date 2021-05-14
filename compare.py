#!/usr/bin/env python3
import argparse
import bz2

import os
import json

import numpy as np
import subprocess

parser = argparse.ArgumentParser(description='comparison')
parser.add_argument('--transformer', dest='transformer', required=False, default='all', 
        help='which transformer to run', nargs='+')
parser.add_argument('--flag', dest='flag', required=False, default='', help='compiler flags to use', nargs='+')
parser.add_argument('--printCmd', dest='printCmd', required=False, type=bool, const=True, default=False, help='print commands', nargs='?')
parser.add_argument('--combo', dest='combo', required=False, type=bool, const=True, default=False, help='combine rewriters', nargs='?')
parser.add_argument('--clangFlag', dest='clangFlag', required=False, default='', help='additional clang flags')
parser.add_argument('--nodelete', dest='nodelete', required=False, type=bool, const=False, default=True, help='dont delete asm files', nargs='?')
parser.add_argument('--csmith', dest='csmith', required=False, type=bool, const=True, default=False, help='run csmith examples', nargs='?')
parser.add_argument('--compiler', dest='compiler', 
        required=False, default='gcc', help='compiler to use')
args = parser.parse_args()

transformers = ['if', 'ifElseBreakup', 'add', 'forToWhile']

directory = './compf'
examples_path = 'examples/'
num_examples = 30

if args.csmith:
    examples_path = 'csmith_ex/'
    num_examples = 1000

toRun = []

deleteRun = []

f = open('build/bin/builtInInclude.path', 'r')
if(not f):
    print('please run make')
    exit(1)

includePath = f.read()
includePath = includePath[:len(includePath)-1]

includePath += ' -I${CSMITH_HOME}/runtime'


if(args.transformer != 'all'):
    transformers = args.transformer

subprocess.run('mkdir compf', cwd='./', text=True, timeout=None, shell=True)

def powerset(A):
    if A == []:
        return [[]]
    a = A[0]
    incomplete_pset = powerset(A[1:])
    rest = []
    for set in incomplete_pset:
        rest.append([a] + set)
    return rest + incomplete_pset


if args.combo:
    transformers_pset = powerset(transformers)
else:
    transformers_pset = [[x] for x in transformers]   
    transformers_pset.append([])   

for powset in transformers_pset:
    powerstring = ''.join(powset)  
    print(powerstring)
    toRun.append('mkdir ' +  powerstring + '_folder')
    toRun.append('mkdir ' +  powerstring + '_asm')
    toRun.append('cp ../' + examples_path +'* ' + powerstring + '_folder/')
   
    for trans in powset: 
        #transforming
        toRun.append('../build/bin/ast-project ' + powerstring + '_folder/* --' 
                    + trans + ' -- -I' + includePath + ' -Wno-narrowing -fpermissive -w' + args.clangFlag)
    
    #compiling
    #TODO: Do not compile files that are equal to initial
    runString = args.compiler + ' -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w '
    for fl in args.flag:
        runString += '-' + fl + ' '
    runString += powerstring + '_folder/* -S'
    toRun.append(runString)
    toRun.append('mv *.s ' + powerstring + '_asm')
    
    #cleaning
    deleteRun.append('rm ' + powerstring + '_folder/*')
    deleteRun.append('rm ' + powerstring + '_asm/*')
    deleteRun.append('rmdir '+ powerstring + '_folder')
    deleteRun.append('rmdir '+ powerstring + '_asm')
    
for cmd in toRun:
    if(args.printCmd):
        print(cmd)
    subprocess.run(cmd, cwd=directory, text=True, timeout=None, shell=True, stderr=subprocess.PIPE)

binarySizes = {}

if True:
    currentSizes = []
    powerstring = ''
    print(powerstring)
    for i in range(0,num_examples):
        currentSizes.append(os.path.getsize('compf/' + powerstring + '_asm/prog' + str(i) + '.s'))
    binarySizes[powerstring] = currentSizes




for powset in transformers_pset:
    currentSizes = []
    powerstring = ''.join(powset)
    print(powerstring)
    for i in range(0,num_examples):
        currentSizes.append(os.path.getsize('compf/' + powerstring + '_asm/prog' + str(i) + '.s'))
    binarySizes[powerstring] = currentSizes

#print(binarySizes)
f = open('result.txt', 'w') 
f.write(json.dumps(binarySizes))

if args.nodelete:
    for cmd in deleteRun:
        if(args.printCmd):
            print(cmd)
        subprocess.run(cmd, cwd=directory, text=True, timeout=None, shell=True, capture_output=False)

    subprocess.run('rmdir compf', cwd='./', text=True, timeout=None, shell=True)
