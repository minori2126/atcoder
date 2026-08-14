#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1));

  dp[0][0] = 0;
  for (int i = 1; i <= S.size(); i++) {
    for (int j = 1; j <= T.size(); j++) {
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      if (S[i - 1] == T[j - 1])
        dp[i][j] = max(dp[i - 1][j - 1] + 1, dp[i][j]);
    }
  }

  cout << dp[S.size()][T.size()] << endl;
}
