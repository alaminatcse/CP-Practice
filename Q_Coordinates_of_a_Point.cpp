/*
    Problem Name: Coordinates of a points
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    if(x==0.0 && y==0.0)
        cout << "Origem\n";
    else if(x==0.0 && y)
        cout << "Eixo Y\n";
    else if(y==0.0 && x)
        cout << "Eixo X\n";
    else if(x>0.0 && y>0.0)
        cout << "Q1\n";
    else if(x<0.0 && y>0.0)
        cout << "Q2\n";
    else if(x<0.0 && y<0.0)
        cout << "Q3\n";
    else if(x>0.0 && y<0.0)
        cout << "Q4\n";
    return 0;
}