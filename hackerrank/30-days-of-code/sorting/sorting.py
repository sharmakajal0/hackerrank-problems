#!/usr/bin/env python

import sys

def swap(n, a):
    numSwaps = 0
    for i in range(n):
        for j in range(0, n-i-1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                numSwaps += 1
    return numSwaps

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))

num_of_swaps = swap(n, a)

print("Array is sorted in ", num_of_swaps, " swaps.")
print("First Element: ", a[0])
print("Last Element: ", a[-1])
