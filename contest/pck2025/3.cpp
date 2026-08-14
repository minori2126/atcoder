#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> h(N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int x;
      cin >> x;
      h[i] = max(h[i], x);
    }
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += h[i];
  }
  cout << ans << endl;
  return 0;
}
