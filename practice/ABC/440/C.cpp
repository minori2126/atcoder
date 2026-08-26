#include <atcoder/fenwicktree>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, W;
    cin >> N >> W;
    vector<int> C(N);
    for (int i = 0; i < N; i++)
      cin >> C[i];
    fenwick_tree<long long> sum(2 * W);
    for (int i = 0; i < N; i++) {
      sum.add(i % (2 * W), C[i]);
    }

    long long ans = sum.sum(0, W);
    for (int i = 1; i < 2 * W; i++) {
      if (i + W > 2 * W) {
        int j = i + W - 2 * W;
        ans = min(ans, sum.sum(i, 2 * W) + sum.sum(0, j));
      } else {
        ans = min(ans, sum.sum(i, i + W));
      }
    }

    cout << ans << endl;
  }
  return 0;
}
