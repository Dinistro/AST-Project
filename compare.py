#!/usr/bin/env python3
import argparse
import bz2

import numpy as np
import subprocess

parser = argparse.ArgumentParser(description='comparison')
parser.add_argument('--transformer', dest='transformer', required=False, default='all', 
        help='which transformer to run', nargs='+')
parser.add_argument('--flag', dest='flag', required=False, default='', help='compiler flags to use', nargs='+')
parser.add_argument('--printCmd', dest='printCmd', required=False, type=bool, const=True, default=False, help='print commands', nargs='?')
parser.add_argument('--clangFlag', dest='clangFlag', required=False, default='', help='additional clang flags')
parser.add_argument('--nodelete', dest='nodelete', required=False, type=bool, const=False, default=True, help='dont delete asm files', nargs='?')
parser.add_argument('--compiler', dest='compiler', 
        required=False, default='g++', help='compiler to use')
args = parser.parse_args()

transformers = ['if', 'add', 'forToWhile']

directory = './compf'

toRun = []

f = open('build/bin/builtInInclude.path', 'r')
if(not f):
    print('please run make and make sure to be running in compf/')
    exit(1)

includePath = f.read()
includePath = includePath[:len(includePath)-1]

if(args.transformer != 'all'):
    transformers = args.transformer

subprocess.run('mkdir compf', cwd='./', text=True, timeout=30, shell=True)
toRun.append('mkdir init_asm')
runString = args.compiler + ' '
for fl in args.flag:
    runString += '-' + fl + ' '
runString += '../examples/* -S'
toRun.append(runString)
toRun.append('mv *.s init_asm')
    
for trans in transformers:
    # copying
    toRun.append('mkdir ' +  trans + '_folder')
    toRun.append('mkdir ' +  trans + '_asm')
    toRun.append('cp ../examples/* ' + trans + '_folder/')

    #transforming
    toRun.append('../build/bin/ast-project ' + trans + '_folder/* --' 
                + trans + ' -- -I' + includePath + ' ' + args.clangFlag)

    #compiling
    runString = args.compiler + ' '
    for fl in args.flag:
        runString += '-' + fl + ' '
    runString += trans + '_folder/* -S'
    toRun.append(runString)
    toRun.append('mv *.s ' + trans + '_asm')

    #comparing
    toRun.append('diff -qrs init_asm/ ' + trans + '_asm/')

    if args.nodelete:
    
        #cleaning
        toRun.append('rm ' + trans + '_folder/*')
        toRun.append('rm ' + trans + '_asm/*')
        toRun.append('rmdir '+ trans + '_folder')
        toRun.append('rmdir '+ trans + '_asm')

if args.nodelete:
    toRun.append('rm init_asm/*')
    toRun.append('rmdir init_asm')


for cmd in toRun:
    if(args.printCmd):
        print(cmd)
    subprocess.run(cmd, cwd=directory, text=True, timeout=30, shell=True)

if args.nodelete:
    subprocess.run('rmdir compf', cwd='./', text=True, timeout=30, shell=True)
