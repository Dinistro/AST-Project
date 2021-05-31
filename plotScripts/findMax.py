#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import matplotlib

import json

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
    index_arr = np.array(indeces)
    
    baseline = val_arr[15]
    #print(baseline)
    #print(val_arr[1])
    
    normed_list = []
    for i in range(0, 16):
        normed_list.append(abs(val_arr[i]-baseline))
    
    normed = np.array(normed_list)
    #print(normed) 
    
    rel_err_list = []
    for i in range(0, 16):
        rel_err_list.append(list(normed[i]/baseline * 100))
    rel = np.array(rel_err_list)
    
    for i in range(0, 16):
        print(i)
        max_val = max(rel[i])
        print(max_val)
        print(index_arr[i][np.argmax(rel[i])])
    
    print(np.count_nonzero(val_arr[0]==31))
    print(np.count_nonzero(val_arr[0]==27))
 
get_data('../gccO3.txt')
get_data('../clangO3.txt')
