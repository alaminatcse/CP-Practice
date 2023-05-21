/*
    Problem Name: Float or Int
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int rem=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '.')
        {
            i++;
            while(i<s.size())
            {
                if(s[i] != '0')
                {
                    rem = 1;
                    break;
                }
                i++;
            }
        }
    }
    if(rem)
    {
        cout << "float ";
        int j;
        for(j=0; j<s.size(); j++)
        {
            if(s[j] == '.')
            {
                break;
            }
            else
            {
                cout << s[j];
            }
        }
        cout << " 0";
        for( ; j<s.size(); j++)
        {
            cout << s[j];
        }
        cout << "\n";
    }
    else
    {
        cout << "int ";
        for(int j=0; j<s.size(); j++)
        {
            if(s[j] == '.')
            {
                break;
            }
            else
            {
                cout << s[j];
            }
        }
        cout << "\n";
    }
    return 0;
}