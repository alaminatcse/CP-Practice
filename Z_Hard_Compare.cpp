/*
    Problem Name: Hard Compare
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b*log10(a) > d*log10(c))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}