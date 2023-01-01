import os
import sys
import numpy as np 
import pandas as pd 

arr = [1,1,1,2,2,2,2,3,3,4,4,4,4,4,4,4,4]

def sol(arr):

    arr_dict = {}
    for i in range(len(arr)):
        if arr[i] in arr_dict.keys():
            arr_dict[arr[i]] += 1
        
        else:
            arr_dict[arr[i]] = 1


    for k, v in arr_dict.items():
        if v == max(arr_dict.values()):
            print(f'\nmost repeated item is: {k} having count: {v}')
        else:
            continue


def sol1(arr):
    best = 0 
    c = 0
    for i in range(len(arr) - 1):
        if arr[i] == arr[i + 1]:
            c += 1
        else:
            best = max(c, best)


def max_num(arr):
    m = arr[0]
    for i in range(len(arr)):
        if arr[i] > m:
            m = arr[i]
        else:
            continue
    return m

print(max_num(arr))

