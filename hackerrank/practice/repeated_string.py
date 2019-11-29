#!/usr/bin/env python3

'''module for repeated string'''

def repeated_string(test_string):

    '''function definition for counting the count of a in repeated string'''
    occurences_of_string = INTEGER_LENGTH // len(test_string)
    remainder = test_string[:INTEGER_LENGTH % len(test_string)]
    return test_string.count("a") * occurences_of_string + remainder.count("a")

TEST_STRING = input()
INTEGER_LENGTH = int(input())
print(repeated_string(TEST_STRING))
