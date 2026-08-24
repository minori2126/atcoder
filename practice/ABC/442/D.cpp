#include <atcoder/segtree>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;

long long op(long long a, long long b) { return a + b; }

long long e() { return 0LL; }

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  segtree<long long, op, e> seg(A);

  while (Q--) {
    int m;
    cin >> m;
    if (m == 1) {
      int x;
      cin >> x;
      x--;
      long long temp = seg.get(x);
      seg.set(x, seg.get(x + 1));
      seg.set(x + 1, temp);
    } else {
      int l, r;
      cin >> l >> r;
      l--;
      cout << seg.prod(l, r) << endl;
    }
  }
  return 0;
}
