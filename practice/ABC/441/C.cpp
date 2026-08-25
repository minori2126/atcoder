#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K, X;
  cin >> N >> K >> X;
  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  sort(A.rbegin(), A.rend());
  long long t = 0;
  bool flag = 0;
  for (int i = N - K; i < N; i++) {
    t += A[i];
    if (t >= X) {
      t = i + 1 - N + K;
      flag = 1;
      break;
    }
  }
  if (t > K || !flag) {
    cout << "-1" << endl;
    return 0;
  } else {
    cout << N - K + t << endl;
  }
  return 0;
}
