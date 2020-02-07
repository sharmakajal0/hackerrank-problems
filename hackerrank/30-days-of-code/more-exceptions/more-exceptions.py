#!/usr/bin/env python

#Write your code here
class Calculator:
    def power(self, base, exponent):
        self.base = base
        self.exponent = exponent
        if self.base >= 0 and self.exponent >= 0:
            return self.base**self.exponent
        else:
            return 'n and p should be non-negative'

myCalculator=Calculator()
T=int(input())
for i in range(T):
    n,p = map(int, input().split())
    try:
        ans=myCalculator.power(n,p)
        print(ans)
    except Exception as e:
        print(e)   
