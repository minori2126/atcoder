#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, M;
  cin >> N >> K >> M;
  priority_queue<pair<int, int>> S;
  for (int i = 0; i < N; i++) {
    int c, v;
    cin >> c >> v;
    S.push({v, c});
  }

  vector<bool> check(N + 1);
  int extra = K - M;
  long long ans = 0;

  for (int i = 0; i < K; i++) {
    while (1) {
      auto [first, second] = S.top();
      S.pop();
      if (check[second] && extra > 0) {
        extra--;
        ans += first;
        break;
      } else if (check[second]) {
        continue;
      } else {
        check[second] = 1;
        ans += first;
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
