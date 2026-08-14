#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(M, vector<int>(N)),
      dp(M + 1, vector<int>((1 << N), (1 << 30)));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }

  dp[0][0] = 0;
  for (int i = 1; i < M + 1; i++) {
    for (int j = 0; j < (1 << N); j++) {
      int already[N];
      for (int k = 0; k < N; k++) {
        already[k] = (j & (1 << k));
      }

      int v = 0;
      for (int k = 0; k < N; k++) {
        if (already[k] || A[i - 1][k])
          v += (1 << k);
      }

      dp[i][j] = min(dp[i][j], dp[i - 1][j]);
      dp[i][v] = min(dp[i][v], dp[i - 1][j] + 1);
    }
  }

  if (dp[M][(1 << N) - 1] == (1 << 30))
    cout << "-1" << endl;
  else
    cout << dp[M][(1 << N) - 1] << endl;
  return 0;
}
