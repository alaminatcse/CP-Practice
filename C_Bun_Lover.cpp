#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = n / 2;
        long long ans = (long long)k * (k + 1); // initialize answer with length of half of the chocolate spiral
        if (n % 2 == 1) {
            ans += k + 1; // add length of the vertical chocolate segment in the middle, if n is odd
        }
        cout << 2 * ans << endl; // multiply by 2 to get total length of chocolate layer
    }
    return 0;
}
