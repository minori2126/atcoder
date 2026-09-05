#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, H;
    cin >> N >> H;
    long long L = H, U = H, time = 0;
    bool flag = 1;
    for (int i = 0; i < N; i++) {
      long long t, l, u;
      cin >> t >> l >> u;
      long long delta = t - time;
      L = max(max(L - delta, l), 0LL);
      U = min(U + delta, u);

      if (U < L)
        flag = 0;
      time = t;
    }
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
