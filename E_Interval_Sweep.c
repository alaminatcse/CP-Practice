/*
    Problem Name: Interval Sweep
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}