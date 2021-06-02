#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import matplotlib

import json

matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

keylabels = ['0000', '0001', '0010','0011',  '0100','0101',  '0110', '0111', '1000', '1001','1010', '1011',  '1100', '1101', '1110', '1111']
colors = ['#a6cee3', '#1f78b4', '#b2df8a', '#33a02c', '#a6cee3', '#1f78b4', '#b2df8a', '#33a02c', '#a6cee3', '#1f78b4', '#b2df8a', '#33a02c', '#a6cee3', '#1f78b4', '#b2df8a', '#33a02c' ]

def get_data(filestring):

    f = open(filestring, 'r')
    data = json.load(f)
    
    keys = list(data.keys())

    toDelete = open('../failures.txt')
    fails = np.loadtxt(toDelete, dtype=str)
    #print(fails)    
   
    vals = []
    indeces = []
    for i in range(0, 16):
        for j in range(0, len(fails)):
            del data[keys[i]][fails[j]]
        vals.append(list(data[keys[i]].values()))
        indeces.append(list(data[keys[i]].keys()))
    
    val_arr = np.array(vals)
    #print(val_arr)
    
    sums = np.sum(val_arr, axis=(1))
    #print(sums)
    
    baseline = val_arr[0]
    #print(baseline)
    #print(val_arr[1])
    
    normed_list = []
    for i in range(0, 16):
        normed_list.append(val_arr[i]-baseline)
    
    normed = np.array(normed_list)
    #print(normed) 
    
    rel_err_list = []
    for i in range(0, 16):
        rel_err_list.append(list(normed[i]/baseline * 100))
    rel = np.array(rel_err_list)
    
    return rel, val_arr

gcc_rel, gcc_vals = get_data('../gccO3.txt')

font = {'size'   : 20}

matplotlib.rc('font', **font)


fig, ax = plt.subplots(figsize=(12,8))

ax.spines['right'].set_visible(False)
ax.spines['top'].set_visible(False)

#print('cases: ', sum(1 for x in gcc_rel))
#print('rel non zero: ', sum(1 for x in gcc_rel[gcc_rel != 0]))
#print('rel zero: ', sum(1 for x in gcc_rel[gcc_rel == 0]))
#print('val non 27: ', sum(1 for x in gcc_rel[gcc_vals != 27]))
#print('both: ', sum(1 for x in gcc_rel[gcc_vals != 27][gcc_rel[gcc_vals != 27] != 0]))

#gcc_vals = gcc_vals[gcc_rel != 0]
#gcc_rel = gcc_rel[gcc_rel != 0]
#print(gcc_rel)
#print(gcc_vals)

baseline = gcc_vals[15]
#only ifSwap
ifs = gcc_rel[8]
#both
ifBreaks = gcc_rel[4]
#only breakup
ifBreaksNo = gcc_rel[12]
ifs_vals = gcc_vals[8]
ifBreaks_vals = gcc_vals[4]
ifBreaksNo_vals = gcc_vals[12]

ifs_vals = ifs[ifs != 0]
ifBreaks_vals = ifBreaks[ifBreaks != 0]
ifBreaksNo_vals = ifBreaksNo[ifBreaksNo != 0]


labels = ['ifSwap', 'ifElseBreakup', 'Both']

ax.scatter(baseline[ifs != 0], ifs_vals, color=colors[0])
ax.scatter(baseline[ifBreaksNo != 0], ifBreaksNo_vals, color=colors[1])
ax.scatter(baseline[ifBreaks != 0], ifBreaks_vals, color=colors[2])

legend = plt.legend(labels, ncol=2, fontsize=20, bbox_to_anchor=(0.75, 1))
legend.pos = 'best'

plt.ylim([-100, 100])

plt.ylabel('relative size [%]')
plt.xlabel('number of assembly lines')

plt.tick_params(
    axis='x',          # changes apply to the x-axis
    which='both',      # both major and minor ticks are affected
    bottom=False,      # ticks along the bottom edge are off
    top=False,         # ticks along the top edge are off
    labelbottom=True,
    labelrotation=0) # labels along the bottom edge are off

plt.show()

