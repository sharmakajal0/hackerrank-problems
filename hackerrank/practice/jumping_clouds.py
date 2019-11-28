#!/usr/bin/env python

'''module for jumping clouds'''

def jumping_clouds(test_string):

    '''Function definition for counting minimum number of jumps'''
    jumps = 0
    i = 0
    while i < (STRING_LENGTH - 1):
        if i + 2 >= STRING_LENGTH or test_string[i + 2] == 1:
            i = i + 1
            jumps = jumps + 1
        else:
            i = i + 2
            jumps = jumps + 1
    return jumps

STRING_LENGTH = int(input())
INPUT_STRING = list(map(int, input().split()))
print(jumping_clouds(INPUT_STRING))
        