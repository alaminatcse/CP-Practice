/*
    Problem Name: The Brothers
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if(s1 == s2)
        cout << "ARE Brothers\n";
    else
        cout << "NOT\n";
    return 0;
}