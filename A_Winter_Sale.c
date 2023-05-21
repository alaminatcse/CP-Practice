/*
    Problem Name: Winter Sale
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    printf("%.2f\n", 1.0*(100*p)/(100-x));
    return 0;
}