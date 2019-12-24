#!/usr/bin/env python

'''module for time in words'''

def print_to_words(hours, minutes):

    '''function definition for converting time in words'''
    nums = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"]

    if minutes == 00:
        print(nums[hours], "o' clock")
    elif minutes == 1:
        print("one minute past", nums[hours])
    elif minutes == 59:
        print("one minute to", nums[(hours % 12) + 1])
    elif minutes == 15:
        print("quarter past", nums[hours])
    elif minutes == 30:
        print("half past", nums[hours])
    elif minutes == 45:
        print("quarter to", (nums[(hours % 12) + 1]))
    elif minutes <= 30:
        print(nums[minutes], "minutes past", nums[hours])
    elif minutes > 30:
        print(nums[minutes], "minutes past", nums[hours])
    
HOURS = int(input())
MINUTES = int(input())

print_to_words(HOURS, MINUTES)
