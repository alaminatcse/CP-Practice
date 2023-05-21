/*
    Problem Name: Frequency Array
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ar[n], fre[100005]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        fre[ar[i]-1]++;
    }
    for(int i=0; i<m; i++)
        printf("%d\n", fre[i]);
    return 0;
}