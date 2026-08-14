#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  for (int i = 0; i < N; i++)
    cin >> h[i];
  vector<long long> dp(N);

  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < N; i++)
    dp[i] =
        min(abs(h[i] - h[i - 1]) + dp[i - 1], abs(h[i] - h[i - 2]) + dp[i - 2]);

  cout << dp[N - 1] << endl;
}
