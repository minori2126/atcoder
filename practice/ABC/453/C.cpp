#include <bits/stdc++.h>
using namespace std;

long long sign(long long x) {
  if (x > 0)
    return 1;
  else
    return -1;
}
int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L[i];
    L[i] *= 2;
  }

  int ans = 0;

  for (int i = 0; i < (1 << N); i++) {
    long long pos = 1;
    int cross = 0;

    for (int j = 0; j < N; j++) {
      long long prev_pos = pos;

      if ((i >> j) & 1) {
        pos += L[j];
      } else {
        pos -= L[j];
      }

      if (sign(prev_pos) * sign(pos) < 0) {
        cross++;
      }
    }
    if (cross > ans)
      ans = cross;
  }

  cout << ans << endl;
  return 0;
}
