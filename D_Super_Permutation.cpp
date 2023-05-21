/*
    Problem Name:
    Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i + 1;
        }
        vector<bool> used(n, false);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int x = (i + 1) % n;
            ans[i] = perm[x];
            used[x] = true;
            for (int j = 1; j < n; j++) {
                x = (x + 1) % n;
                if (!used[x]) {
                    ans[i] = ans[i] * n + perm[x];
                    used[x] = true;
                }
            }
        }
        vector<bool> seen(n * n, false);
        bool valid = true;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = 0; j <= i; j++) {
                x = (x * n + ans[j] - 1) % (n * n);
            }
            if (seen[x]) {
                valid = false;
                break;
            }
            seen[x] = true;
        }
        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}