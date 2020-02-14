import sys

class Solution:
    def __init__(self):
        self.stack = []
        self.queue = []
    def pushCharacter(self, data):
        self.stack.append(data)
    
    def enqueueCharacter(self, data):
        self.queue.append(data)
    
    def popCharacter(self):
        return self.stack.pop(0)
    
    def dequeueCharacter(self):
        return self.queue.pop(-1)
    
    def reverse(self):
        return self.stack[::-1]
    

        rev = reverse()
        if self.queue == rev:
            return True
        else:
            return False
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
