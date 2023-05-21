/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int n, int m) {
    if(n == m) return true; // base case
    if(n > m) return false; // base case
    return isPossible(2*n, m) || isPossible(2*n+1, m); // recursive cases
}
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m;
        cin >> n >> m;
        if(n < m) {
            cout << "NO\n";
        }
        else {
            if(isPossible(n, m)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}