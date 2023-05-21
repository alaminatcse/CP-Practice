/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    int n;
    while(tc--) {
        cin >> n;
        int f01 = 1000000, f10 = 1000000, f11 = 1000000;
        int m, r1 = 1, r2 = 1, r3 = 1;
        string st;
        while(n--) {
            cin >> m >> st;
            if(st == "01") {
                if(f01 > m) {
                    f01 = m;
                }
                r1 = 0;
            }
            else if(st == "10") {
                if(f10 > m) {
                    f10 = m;
                }
                r2 = 0;
            }
            else if(st == "11") {
                if(f11 > m) {
                    f11 = m;
                }
                r3 = 0;
            }
        }
        if(r1 && r2 && r3) {
            cout << "-1\n";
        }
        else if(r1==0 && r2==0 && r3==0) {
            cout << min(f01+f10, f11) << "\n";
        }
        else if(r1==0 && r2==0 && r3) {
            cout << f01+f10 << "\n";
        }
        else if(r1==0 && r2 && r3==0) {
            cout << f11 << "\n";
        }
        else if(r1 && r2==0 && r3==0) {
            cout << f11 << "\n";
        }
        else if(r1==0 && r2 && r3) {
            cout << "-1\n";
        }
        else if(r1 && r2==0 && r3) {
            cout << "-1\n";
        }
        else if(r1 && r2 && r3==0) {
            cout << f11 << "\n";
        }
        else {
            cout << "-1\n";
        }
    }
    return 0;
}