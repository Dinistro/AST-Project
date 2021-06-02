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
   
    print('max file: ', max(val_arr[15])) 
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
        print('num: ', i)
        print('trans: ', keys[i])
        max_val = max(rel[i])
        max_ind = int(index_arr[i][np.argmax(rel[i])])
        print('max: ', max_val)
        print('max index: ', max_ind)
    

    print('size 26: ', np.count_nonzero(val_arr[0]==26))
    print('size 27: ', np.count_nonzero(val_arr[0]==27))
 
get_data('../clangO3.txt')
get_data('../gccO3.txt')
