#!/usr/bin/env python3

'''module for repeated string'''

def repeated_string(test_string, string_length):

    '''function definition for repeated string'''
    A = 0
    for i in range(len(test_string)):
        if test_string[i] == 'a':
            A += 1
    # number of occurences of the whole string
    occurences = int((string_length/len(test_string))*A)

    return occurences

TEST_STRING = 'aba'
STRING_LENGTH = 100
RESULT = repeated_string(TEST_STRING, STRING_LENGTH)
print(RESULT)
