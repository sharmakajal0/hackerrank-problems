#!/usr/bin/env python

def bubble_sort(arr):
    counts = {}
    
    for i in arr:
        if i in counts:
            counts[i] += 1
        else:
            counts[i] = 1

    # print(counts)

    pairs = 0

    for i in counts:
        pairs += counts[i] // 2
    # for i, value in enumerate(counts):
    #     pairs += value // 2
    print(pairs)

def print_array(test_array):
    print(' '.join(map(str, test_array)))

size = int(input())
array = list(map(int, input().split(" ")))

bubble_sort(array)
