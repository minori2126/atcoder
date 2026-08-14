#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  string s;
  cin >> s;
  for (int i = 0; i < 3; i++) {
    ans += int(s[i]) - 48;
  }
  cout << ans;
  return 0;
}
