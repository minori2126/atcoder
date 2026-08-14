#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  string S;
  cin >> N >> L >> R >> S;
  vector<vector<int>> sum(26, vector<int>(N + 1));
  for (int i = 0; i < 26; i++) {
    for (int j = 1; j < N + 1; j++) {
      sum[i][j] = sum[i][j - 1];
      if (S[j - 1] == i + 'a')
        sum[i][j]++;
    }
  }

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    if (i + R + 1 > N && i + L <= N)
      ans += sum[S[i] - 'a'][N] - sum[S[i] - 'a'][i + L];
    else if (i + L <= N)
      ans += sum[S[i] - 'a'][i + R + 1] - sum[S[i] - 'a'][i + L];
  }
  cout << ans;

  return 0;
}
