/*
    Problem Name: Memo and Momo
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
*/
#include <stdio.h>
#include <string.h>
int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if(a%k==0 && b%k==0)
        printf("Both\n");
    else if(a%k==0 && b%k!=0)
        printf("Memo\n");
    else if(a%k!=0 && b%k==0)
        printf("Momo\n");
    else
        printf("No One\n");
    return 0;
}