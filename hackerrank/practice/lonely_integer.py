#!/usr/bin/env python

def lonely_integer(test_array):
    counts = {}

    for i in test_array:
        if i in counts:
            counts[i] += 1
        else:
            counts[i] = 1
    # print(counts)

    for i in counts:
        if counts[i] == 1:
            print(i)


NUMBER_OF_ELEMENTS = int(input())
TEST_ARRAY = list(map(int, input().rstrip().split()))
lonely_integer(TEST_ARRAY)
