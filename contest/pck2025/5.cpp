#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N), sub(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];
  for (int i = 0; i < N; i++) {
    cin >> b[i];
    sub[i] = a[i] - b[i];
  }
  int ans = 0;
  sort(sub.begin(), sub.end());
  for (int i = K; i < N; i++) {
    ans += sub[i];
  }
  cout << ans;
  return 0;
}
