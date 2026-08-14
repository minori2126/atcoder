#include <atcoder/segtree>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;

int op(int a, int b) { return max(a, b); }

int e() { return 0; }

int main() {
  int N;
  cin >> N;
  vector<int> H(N), L(N);
  for (int i = 0; i < N; i++)
    cin >> H[i] >> L[i];

  segtree<int, op, e> seg(H);

  int Q;
  cin >> Q;
  while (Q--) {
    int T;
    cin >> T;
    auto it = upper_bound(L.begin(), L.end(), T);
    int index = distance(L.begin(), it);

    cout << seg.prod(index, N) << endl;
  }

  return 0;
}
