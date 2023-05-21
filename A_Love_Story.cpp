/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    string s = "codeforces";
    while(tc--) {
        string st;
        cin >> st;
        int count = 0;
        for(int i = 0; i < 10; i++) {
            if(s[i] != st[i]) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}