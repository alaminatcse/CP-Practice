/*
    Problem Name: Simple Calculator
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x+y << "\n";
    cout << x << " * " << y << " = " << (long long)x*y << "\n";
    cout << x << " - " << y << " = " << x-y << "\n";
    return 0;
}