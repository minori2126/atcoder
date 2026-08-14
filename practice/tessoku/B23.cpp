#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> X(N), Y(N);
  for (int i = 0; i < N; i++)
    cin >> X[i] >> Y[i];
  vector<vector<double>> dp((1 << N), vector<double>(N, (1LL << 60)));

  dp[0][0] = 0;
  for (int i = 0; i < (1 << N); i++) {
    for (int j = 0; j < N; j++) {
      if (dp[i][j] >= (1LL << 60))
        continue;

      for (int k = 0; k < N; k++) {
        if (i & (1 << k))
          continue;
        double DIST = sqrt(1.0 * (X[j] - X[k]) * (X[j] - X[k]) +
                           1.0 * (Y[j] - Y[k]) * (Y[j] - Y[k]));
        dp[i + (1 << k)][k] = min(dp[i + (1 << k)][k], dp[i][j] + DIST);
      }
    }
  }

  cout << fixed << setprecision(15) << dp[(1 << N) - 1][0] << endl;
}
