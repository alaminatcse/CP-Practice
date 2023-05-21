/*
    Problem Name: Two numbers
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a*1.0/b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil(a*1.0/b) << "\n";
    cout << "round " << a << " / " << b << " = " << round(a*1.0/b) << "\n";
    return 0;
}