#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  vector<vector<int>> dp(N + 1, vector<int>(S + 1));

  dp[0][0] = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j >= A[i - 1] && dp[i - 1][j - A[i - 1]])
        dp[i][j] = 1;
    }
  }
  int num = S;
  vector<int> ans;
  if (!dp[N][S]) {
    cout << -1 << endl;
    return 0;
  } else {
    for (int i = N; i > 0; i--) {
      if (!dp[i - 1][num]) {
        ans.push_back(i);
        num -= A[i - 1];
      }
    }
  }

  cout << ans.size() << endl;
  for (int i = ans.size(); i > 0; i--)
    cout << ans[i - 1] << " ";
}
