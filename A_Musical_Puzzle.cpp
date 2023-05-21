/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  set< string > container;
  for(int i = 0; i < n-1; i++) {
    string temp = "";
    temp += str[i];
    temp += str[i + 1];
    container.insert(temp);
  }
  cout << container.size() << '\n';
}

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    solve();
  }
  return 0;
}