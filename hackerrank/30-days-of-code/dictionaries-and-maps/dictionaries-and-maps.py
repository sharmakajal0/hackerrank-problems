#!/usr/bin/env python

n = int(input())

phonebook = {}

for _ in range(n):
    name, number = input().split()
    phonebook[name] = number


while(True):
    try:
        name = input()
        if name in phonebook:
            print("%s=%s" % (name, phonebook[name]))
        else:
            print("Not Found")
    except EOFError:
        break
