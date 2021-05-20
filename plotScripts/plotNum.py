#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import matplotlib

import json

matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

colors = ['#a6cee3', '#1f78b4', '#b2df8a', '#33a02c']

f = open('../result.txt', 'r')
data = json.load(f)

keys = list(data.keys())
vals = list(data.values())

print(keys)
keylabels = ['0000', '1111', '1110', '1101', '1100', '1011', '1010', '1001', '1000', '0111', '0110', '0101', '0100', '0011', '0010', '0001' ]

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
max_val = max(rel[9])
print(max_val)
print(np.argmax(rel[9]))

#print(val_arr.shape)
big_diff_list = []
for i in range(0, 16):
    currents = np.where(rel[i] >= 1)
    #print(np.where(rel[i] >= 1))
    big_diff_list.append(len(currents[0]))
big_diff = np.array(big_diff_list)
print(big_diff)

font = {'size'   : 20}

matplotlib.rc('font', **font)


fig, ax = plt.subplots(figsize=(12,8))
bars = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
#posFirst = [x - 0.2 for x in bars]
#posThird = [x + 0.2 for x in bars]

plt.ylim([0, 1000])

ax.spines['right'].set_visible(False)
ax.spines['top'].set_visible(False)

ax.bar(bars, big_diff, width=0.2, align='edge', color=colors[0], tick_label=keylabels)
#ax.bar(bars, clangOSX, width=0.2, align='edge', color=colors[1])
#ax.bar(posThird, clangLinux, width=0.2, align='edge', color=colors[2], tick_label=transform)


#legend = plt.legend(compilers, ncol=2, fontsize=20, bbox_to_anchor=(0.75, 1))
#legend.get_frame().set_edgecolor('white')
#legend.pos = 'upper left'

plt.ylabel('files with relative size diff bigger than 1')

plt.tick_params(
    axis='x',          # changes apply to the x-axis
    which='both',      # both major and minor ticks are affected
    bottom=False,      # ticks along the bottom edge are off
    top=False,         # ticks along the top edge are off
    labelbottom=True,
    labelrotation=90) # labels along the bottom edge are off

plt.show()

