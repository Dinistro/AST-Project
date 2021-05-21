#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import matplotlib

import json

matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

keylabels = ['0000', '0001', '0010','0011',  '0100','0101',  '0110', '0111', '1000', '1001','1010', '1011',  '1100', '1101', '1110', '1111']
colors = ['#a6cee3', '#1f78b4', '#b2df8a', '#33a02c']

def get_data(filestring):

    f = open(filestring, 'r')
    data = json.load(f)
    
    keys = list(data.keys())
    vals = list(data.values())
    
    
    sorted_keys = []
    sorted_keys.append(keys[0])
    sorted_vals = []
    sorted_vals.append(vals[0])
    for i in range(1,16):
        sorted_keys.append(keys[16-i])
        sorted_vals.append(vals[16-i])
    vals = sorted_vals
    keys = sorted_keys
    
    print(keys)
    
    val_arr = np.array(vals)
    #print(val_arr)
    
    sums = np.sum(val_arr, axis=(1))
    #print(sums)
    
    baseline = val_arr[0]
    #print(baseline)
    #print(val_arr[1])
    
    normed_list = []
    for i in range(0, 16):
        normed_list.append(abs(val_arr[i]-baseline))
    
    normed = np.array(normed_list)
    #print(normed) 
    
    rel_err_list = []
    for i in range(0, 16):
        rel_err_list.append(normed[i]/baseline * 100)
    rel = np.array(rel_err_list)
    
    for i in range(0, 16):
        print(i)
        max_val = max(rel[i])
        print(max_val)
        print(np.argmax(rel[i]))
    
    #print(val_arr.shape)
    big_diff_list = []
    for i in range(0, 16):
        currents = np.where(rel[i] >= 1)
        #print(np.where(rel[i] >= 1))
        big_diff_list.append(len(currents[0]))
    big_diff = np.array(big_diff_list)
    print(big_diff)
    return big_diff, rel, val_arr

clang_diff, clang_rel, clang_vals = get_data('../clangO3.txt')
gcc_diff, gcc_rel, gcc_vals = get_data('../gccO3.txt')

font = {'size'   : 20}

matplotlib.rc('font', **font)


fig, ax = plt.subplots(figsize=(12,8))

ax.spines['right'].set_visible(False)
ax.spines['top'].set_visible(False)

ax.scatter(gcc_vals[gcc_rel != 0], gcc_rel[gcc_rel != 0])

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

