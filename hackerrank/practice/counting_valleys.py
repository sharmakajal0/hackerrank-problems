#!/usr/bin/env python

'''module of counting valleys'''

def counting_valleys(length_of_string, test_string):

    '''function definition of counting valleys'''
    valleys = 0
    level = 0

    for i in range(length_of_string):
        if test_string[i] == 'D':
            valleys -= 1
        if test_string[i] == 'U':
            valleys += 1

        if valleys == 0 and test_string[i] == 'U':
            level += 1

    return level


LENGTH_OF_STRING = int(input())
TEST_STRING = input()
VALLEYS = counting_valleys(LENGTH_OF_STRING ,TEST_STRING)
print(VALLEYS)
