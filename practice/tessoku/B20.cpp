#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1));
  for (int i = 0; i <= S.size(); i++)
    dp[i][0] = i;
  for (int i = 0; i <= T.size(); i++)
    dp[0][i] = i;

  for (int i = 1; i <= S.size(); i++) {
    for (int j = 1; j <= T.size(); j++) {
      if (S[i - 1] == T[j - 1])
        dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1]});
      else
        dp[i][j] =
            min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
    }
  }
  cout << dp[S.size()][T.size()] << endl;
  return 0;
}
