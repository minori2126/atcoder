#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<vector<int>> dp(N, vector<int>(N));
  for (int i = 0; i < N; i++)
    dp[i][i] = 1;
  for (int i = 0; i < N - 1; i++) {
    if (S[i] == S[i + 1])
      dp[i][i + 1] = 2;
    else
      dp[i][i + 1] = 1;
  }

  for (int LEN = 2; LEN < N; LEN++) {
    for (int l = 0; l + LEN < N; l++) {
      int r = LEN + l;

      if (S[l] == S[r])
        dp[l][r] = max({dp[l][r - 1], dp[l + 1][r], dp[l + 1][r - 1] + 2});
      else
        dp[l][r] = max(dp[l][r - 1], dp[l + 1][r]);
    }
  }

  cout << dp[0][N - 1] << endl;
  return 0;
}
