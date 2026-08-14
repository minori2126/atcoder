#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N - 1), B(N - 2), dp(N, (1 << 30));
  for (int i = 0; i < N - 1; i++)
    cin >> A[i];
  for (int i = 0; i < N - 2; i++)
    cin >> B[i];

  dp[0] = 0;
  for (int i = 0; i < N - 1; i++) {
    dp[i + 1] = min(dp[i + 1], dp[i] + A[i]);
    if (i < N - 2)
      dp[i + 2] = min(dp[i + 2], dp[i] + B[i]);
  }

  cout << dp[N - 1] << endl;
}
