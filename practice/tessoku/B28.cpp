#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
  int N;
  cin >> N;

  vector<long long> dp(N + 1, 0);
  dp[1] = 1;
  for (int i = 2; i <= N; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

  cout << dp[N] << endl;
  return 0;
}
