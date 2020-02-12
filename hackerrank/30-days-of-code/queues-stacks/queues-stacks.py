#!/usr/bin/env python
import sys

class Solution:
    def __init__(self, limit):
        self.limit = limit
        self.queue = []
        self.front = None
        self.rear = None
        self.size = 0

    # Write your code here
    # Functions
    # pushCharacter
    def pushCharacter(self, data):
        
    # enqueueCharacter
    def enqueueCharacter(self, item):
        if self.size >= self.limit:
            print("Queue Overflow")
            return
        else:
            self.queue.append(item)
        
        if self.front is None:
            self.front = self.rear = 0
        else:
            self.rear = self.size
        self.size += 1
        print(self.que)
    # dequeueCharacter
    # popCharacter
    # isPalindrome
# read the string s
s=input()
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
#finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    
