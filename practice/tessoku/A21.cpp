#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N), A(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i] >> A[i];
    P[i]--;
  }
  vector<vector<int>> dp(N, vector<int>(N));

  dp[0][N - 1] = 0;
  for (int LEN = N - 2; LEN >= 0; LEN--) {
    for (int l = 0; l < N - LEN; l++) {
      int r = LEN + l;

      int score1 = 0;
      if (l <= P[l - 1] && r >= P[l - 1])
        score1 = A[l - 1];

      int score2 = 0;
      if (l <= P[r + 1] && r >= P[r + 1])
        score2 = A[r + 1];

      if (l == 0)
        dp[l][r] = dp[l][r + 1] + score2;
      else if (r == N - 1)
        dp[l][r] = dp[l - 1][r] + score1;
      else
        dp[l][r] = max(dp[l - 1][r] + score1, dp[l][r + 1] + score2);
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
    ans = max(ans, dp[i][i]);

  cout << ans << endl;
}
