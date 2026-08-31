#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < M; i++)
    cin >> B[i];
  const long long mod = 998244353;

  sort(B.begin(), B.end());

  vector<int> sumB(M + 1);
  for (int i = 0; i < M; i++)
    sumB[i + 1] = sumB[i] + B[i];

  long long ans = 0;

  for (int i = 0; i < N; i++) {
    int k = upper_bound(B.begin(), B.end(), A[i]) - B.begin();
    long long left = (1LL * k * A[i]) - sumB[k],
              right = sumB[M] - sumB[k] - (1LL * (M - k) * A[i]);

    long long sum = (left + right) % mod;
    ans = (ans + sum) % mod;
  }

  cout << ans << endl;
  return 0;
}
