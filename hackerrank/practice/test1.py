#!/usr/bin/env python

def sum_of_digits(n):
    result = 0
    sfor i in range(n):
        if i % 3 == 0 or i % 5 == 0:
            result += i
    return result



   