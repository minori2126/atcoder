#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(K + 1), B;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }

  B = A;
  sort(A.rbegin(), A.rend());
  int max = A[0];
  int ans = 0;
  for (int i = 1; i < K + 1; i++) {
    if (B[i] + 1 >= max)
      ans++;
  }
  cout << ans << endl;

  return 0;
}
