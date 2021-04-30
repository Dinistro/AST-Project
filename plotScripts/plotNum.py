#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import matplotlib

matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

colors = ['#a6cee3', '#1f78b4', '#b2df8a', '#33a02c']


compilers=["gcc", "clang (OSX)", "clang (Linux)"]
transform = ["AddSwap   ", "IfSwap   ", "forReplace   "]

gcc = [1, 13, 1]
clangOSX = [1, 11, 5]
clangLinux = [1 , 15, 11]


font = {'size'   : 20}

matplotlib.rc('font', **font)


fig, ax = plt.subplots(figsize=(12,8))
bars = [0, 1, 2]
posFirst = [x - 0.2 for x in bars]
posThird = [x + 0.2 for x in bars]

plt.ylim([0, 30])

ax.spines['right'].set_visible(False)
ax.spines['top'].set_visible(False)

ax.bar(posFirst, gcc, width=0.2, align='edge', color=colors[0])
ax.bar(bars, clangOSX, width=0.2, align='edge', color=colors[1])
ax.bar(posThird, clangLinux, width=0.2, align='edge', color=colors[2], tick_label=transform)


legend = plt.legend(compilers, ncol=2, fontsize=20, bbox_to_anchor=(0.75, 1))
legend.get_frame().set_edgecolor('white')
legend.pos = 'upper left'

plt.ylabel('different assembly files')

plt.tick_params(
    axis='x',          # changes apply to the x-axis
    which='both',      # both major and minor ticks are affected
    bottom=False,      # ticks along the bottom edge are off
    top=False,         # ticks along the top edge are off
    labelbottom=True) # labels along the bottom edge are off

plt.show()

