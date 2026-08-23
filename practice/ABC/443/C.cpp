#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int a, prev = 0, ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (i == 0) {
      ans += a;
      prev = a;
      continue;
    }
    if (a - prev - 100 > 0) {
      ans += a - prev - 100;
      prev = a;
    }
  }

  if (prev == 0)
    ans = T;
  else if (T - prev > 100)
    ans += T - prev - 100;

  cout << ans << endl;
  return 0;
}
