#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, W;
  cin >> N >> W;
  vector<long long> w(N), v(N);
  for (int i = 0; i < N; i++)
    cin >> w[i] >> v[i];

  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1));

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= W; j++)
      dp[i][j] = -1;
  }
  dp[0][0] = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= W; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j >= w[i - 1] && dp[i - 1][j - w[i - 1]] != -1 &&
          dp[i - 1][j - w[i - 1]] + v[i - 1] > dp[i][j])
        dp[i][j] = dp[i - 1][j - w[i - 1]] + v[i - 1];
    }
  }

  long long answer = dp[N][0];
  for (int i = 1; i <= W; i++)
    answer = max(answer, dp[N][i]);

  cout << answer << endl;
}
