'''
    Problem Name:
    Problem Link:

import sys
sys.stdin = open('E:\Skill Edu\Py-Practice/input.txt', 'r')
sys.stdout = open('E:\Skill Edu\Py-Practice/output.txt', 'w')
'''
n, k, a = map(int, input().split())
res = (n*k)
if res%a != 0:
    print('double')
elif res/a >= (-2147483648) and res/a <2147483648:
    print('int')
else:
    print('long long')
