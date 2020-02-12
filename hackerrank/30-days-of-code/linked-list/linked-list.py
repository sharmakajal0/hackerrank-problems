#!/usr/bin/env python

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next

    def setData(self, data):
        self.data = data

    def getData(self):
        return self.data

    def insert(self,head,data): 
        newNode = Node()
        newNode.setData(data)

        current = self.head
        while current.getNext() != None:
            current = current.getNext()
        current.setNext(newNode)
        self.length += 1

mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)    
mylist.display(head); 	  
