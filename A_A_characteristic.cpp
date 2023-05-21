/*
    Problem Name:
    Problem Link: https://codeforces.com/contest/1823/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[101] = {0};
    for(int i=1; i<101; i++)
        ar[i] = i*(i-1)/2;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        if(ar[n] == k)
        {
            cout << "YES\n";
            for(int i=0; i<n-1; i++)
                cout << "1 ";
            cout << "1\n";
        }
        else
        {
            int rem=1, i=1, j=n-1;
            while(i<=j)
            {
                if(ar[i]+ar[j] == k)
                {
                    cout << "YES\n";
                    for(int x=0; x<i; x++)
                        cout << "-1 ";
                    for(int x=0; x<j-1; x++)
                        cout << "1 ";
                    cout << "1\n";
                    rem = 0;
                    break;
                }
                i++;
                j--;
            }
            if(rem)
                cout << "NO\n";
        }
    }
    return 0;
}