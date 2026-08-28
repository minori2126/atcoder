#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S, T;
  int ans = 100000;
  cin >> N >> M >> S >> T;
  for (int i = 0; i < N - M + 1; i++) {
    int a = 0;
    for (int j = 0; j < M; j++) {
      a += S[i + j] - T[j] >= 0 ? S[i + j] - T[j] : S[i + j] - T[j] + 10;
    }
    ans = min(ans, a);
  }
  cout << ans << endl;

  return 0;
}
