#!/usr/bin/env python

def plus_minus(arr, n):
    positive, negative, zero = 0, 0, 0
    for i in arr:
        if i > 0:
            positive += 1
        if i == 0:
            zero += 1
        if i < 0:
            negative += 1
    ratio_positive = positive/n
    ratio_negative = negative/n
    ratio_zero = zero/n
    print(ratio_positive)
    print(ratio_negative)
    print(ratio_zero)

n = int(input())
test_array = list(map(int, input().rstrip().split()))
plus_minus(test_array, n)