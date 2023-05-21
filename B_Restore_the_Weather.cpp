/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;

void solve_fun() {
    int n, k;
    cin >> n >> k;
    vector< pair<int, int> > forcast;
    for(int x, i=0; i < n; i++) {
        cin >> x;
        forcast.push_back({x, i});
    }
    vector< int > actual;
    for(int x, i=0; i < n; i++) {
        cin >> x;
        actual.push_back(x);
    }
    sort(forcast.begin(), forcast.end());
    sort(actual.begin(), actual.end());
    vector< int > final(n);
    for(int i = 0; i < n; i++) {
        final[forcast[i].second] = actual[i]; 
    }
    for(int i = 0; i < n-1; i++) {
        cout << final[i] << " ";
    }
    cout << final[n-1] << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        solve_fun();
    }
    return 0;
    return 0;
}