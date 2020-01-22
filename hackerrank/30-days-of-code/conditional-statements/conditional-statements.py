#!/ust/bin/env python3

'''Module for 30_conditional_statement'''

if __name__ == '__main__':
    N = int(input())

    if N % 2 == 0:
        if N >= 2 and N <= 5:
            print("Not Weird")
        elif N >= 6 and N <= 20:
            print("Weird")
        elif N >= 20:
            print("Not Weird")
    else:
        print("Weird")
