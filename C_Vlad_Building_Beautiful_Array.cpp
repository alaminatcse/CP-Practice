/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
#define mx 1000000000
void solve_fun() {
    int n;
    cin >> n;
    int arr[n];
    int ev = 0, od = 0, ev_min = mx, od_min = mx+1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2) {
            od++;
            if(od_min > arr[i]) od_min = arr[i];
        }
        else {
            ev++;
            if(ev_min > arr[i]) ev_min = arr[i];
        }
    }
    if(ev==0 || od==0) cout << "YES\n";
    else if(od_min == 1) cout << "YES\n";
    else if(ev_min > od_min) cout << "YES\n";
    else cout << "NO\n";
    //cout << "ev: " << ev << " ev_min: " << ev_min << " od: " << od << " od_min: " << od_min << "\n";
}
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        solve_fun();
    }
    return 0;
}