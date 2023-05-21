/*
    Problem Name: Calculator
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    if(c == '+')
        cout << a+b << "\n";
    else if(c == '-')
        cout << a-b << "\n";
    else if(c == '*')
        cout << a*b << "\n";
    else if(c == '/')
        cout << a/b << "\n";
    return 0;
}