#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  // vector<int> P(1000001), num(1000001), check(1000001);
  vector<int> num(1000001);

  for (int i = 0; i < N; i++) {
    int s, t;
    cin >> s >> t;
    if (t - s >= D) {
      num[s] += 1;
      num[t - D + 1] -= 1;
    }
  }

  long long ans = 0;
  long long current = 0;

  for (int i = 1; i < 1000001; i++) {
    current += num[i];

    if (current >= 2) {
      ans += current * (current - 1) / 2;
    }
  }

  cout << ans << endl;

  return 0;
}
