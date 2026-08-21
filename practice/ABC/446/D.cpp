#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> mp;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    mp[a] = mp[a - 1] + 1;
  }

  int ans = 0;
  for (const auto &[key, val] : mp) {
    ans = max(ans, val);
  }

  cout << ans << endl;
  return 0;
}
