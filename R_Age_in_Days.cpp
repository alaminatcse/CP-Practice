/*
    Problem Name: Age in Days
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin >> days;
    int years = days/365;
    days %= 365;
    int months = days/30;
    days %= 30;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
    return 0;
}