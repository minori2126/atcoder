#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<vector<long long>> input(4, vector<long long>(N + 1));
  vector<vector<long long>> dp(4, vector<long long>(N + 1));
  for (long long i = 1; i < 4; i++)
    for (long long j = 1; j <= N; j++)
      cin >> input[i][j];

  input[1][N - 1] = 0;
  input[1][N] = 0;
  input[2][1] = 0;
  input[2][N] = 0;
  input[3][1] = 0;
  input[3][2] = 0;

  for (long long i = 1; i < 4; i++) {
    for (long long j = 1; j <= N; j++) {
      dp[i][j] =
          max(dp[i][j - 1] + input[i][j], dp[i - 1][j - 1] + input[i][j]);
    }
  }

  cout << dp[3][N] << endl;
  return 0;
}
