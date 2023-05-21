/*
    Problem Name: Sum of Digits
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ar[n+1];
    scanf("%s", ar);
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += ar[i]-'0';
    printf("%d\n", sum);
    return 0;
}