#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, W;
  cin >> N >> W;
  vector<long long> w(N), v(N);
  for (int i = 0; i < N; i++)
    cin >> w[i] >> v[i];
  vector<vector<long long>> dp(N + 1, vector<long long>(100009, (1LL << 60)));

  dp[0][0] = 0;
  for (int i = 1; i <= N; i++) {
    for (long long j = 0; j <= 100000; j++) {
      dp[i][j] = dp[i - 1][j];
      if (v[i - 1] <= j && dp[i - 1][j - v[i - 1]] != -1)
        dp[i][j] = min(dp[i][j], dp[i - 1][j - v[i - 1]] + w[i - 1]);
    }
  }

  int ans;
  for (int i = 0; i <= 100000; i++) {
    if (dp[N][i] <= W)
      ans = i;
  }

  cout << ans << endl;
}
