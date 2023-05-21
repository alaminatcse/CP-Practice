/*
    Problem Name: Mathematical Expression
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if(s == '+')
    {
        if(a+b == c)
            cout << "Yes\n";
        else 
            cout << a+b << "\n";
    }
    else if(s == '-')
    {
        if(a-b == c)
            cout << "Yes\n";
        else
            cout << a-b << "\n";
    }
    else if(s == '*')
    {
        if(a*b == c)
            cout << "Yes\n";
        else
            cout << (long long)a*b << "\n";
    }
    return 0;
}