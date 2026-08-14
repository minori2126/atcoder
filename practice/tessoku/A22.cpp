#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N - 1), B(N - 1), dp(N, -(1 << 30));
  for (int i = 0; i < N - 1; i++)
    cin >> A[i];
  for (int i = 0; i < N - 1; i++)
    cin >> B[i];

  dp[0] = 0;
  for (int i = 0; i < N - 1; i++) {
    dp[A[i] - 1] = max(dp[i] + 100, dp[A[i] - 1]);
    dp[B[i] - 1] = max(dp[i] + 150, dp[B[i] - 1]);
  }
  cout << dp[N - 1] << endl;
  return 0;
}
