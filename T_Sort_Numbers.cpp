/*
    Problem Name: Sort Numbers
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int big, mid, sml;
    if(a>=b && a>=c)
    {
        big = a;
        if(b>c)
        {
            mid = b;
            sml = c;
        }
        else
        {
            mid = c;
            sml = b;
        }
    }
    else if(b>=c && b>=a)
    {
        big = b;
        if(c>a)
        {
            mid = c;
            sml = a;
        }
        else
        {
            mid = a;
            sml = c;
        }
    }
    else
    {
        big = c;
        if(a>b)
        {
            mid = a;
            sml = b;
        }
        else
        {
            mid = b;
            sml = a;
        }
    }
    cout << sml << "\n" << mid << "\n" << big << "\n";
    cout << "\n" << a << "\n" << b << "\n" << c << "\n";
    return 0;
}