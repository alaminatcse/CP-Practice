/*
    Problem Name:
    Problem Link: https://codeforces.com/contest/1822/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, t;
        cin >> n >> t;
        int ar[n], br[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        for(int i=0; i<n; i++)
            cin >> br[i];
        int in=-1, mx=-1;
        for(int i=0; i<n; i++, t--)
        {
            if(t-ar[i] >= 0)
            {
                if(br[i] >= mx)
                {
                    mx = br[i];
                    in = i;
                }
            }
        }
        if(in < 0)
            cout << "-1\n";
        else
            cout << in+1 << "\n";
    }
    return 0;
}