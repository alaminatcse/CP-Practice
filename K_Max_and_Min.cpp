/*
    Problem Name: Max and Min
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c)
    {
        printf("%d ", a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }
 
    if(a>=b && a>=c)
    {
        printf("%d\n", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}