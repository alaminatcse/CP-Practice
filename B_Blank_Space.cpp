/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = 0, mx = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                count++;
                if(mx < count) {
                    mx = count;
                }
            }
            else {
    
                count = 0;
            }
        }
        cout << mx << "\n";
    }   

    return 0;
}