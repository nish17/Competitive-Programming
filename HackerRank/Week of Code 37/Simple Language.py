#!/bin/python3

import os
import sys


#
# Complete the maximumProgramValue function below.
#
def maximumProgramValue(n):
    #
    # Write your code here.
    #
    x = 0
    temp = 0

    for i in range(n):
        t = str(input())
        y = int(input())
        if t is "add":
            x += y
            if temp < x:
                temp = x
        elif t is "set":
            x = y
            if temp < x:
                temp = x

    return temp


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = maximumProgramValue(n)

    fptr.write(str(result) + '\n')

    fptr.close()
