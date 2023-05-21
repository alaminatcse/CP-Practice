/*
    Problem Name:
    Problem Link: https://codeforces.com/contest/1822/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n, x;
        cin >> n;
        vector<long long> ar;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            ar.push_back(x);
        }
        sort(ar.begin(), ar.end());
        cout << max(ar[0]*ar[1], ar[n-2]*ar[n-1]) << "\n";
    }
    return 0;
}