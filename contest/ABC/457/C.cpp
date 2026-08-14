#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;
  vector<long long> L(N);
  vector<vector<long long>> A(N);
  for (long long i = 0; i < N; i++) {
    cin >> L[i];
    vector<long long> line(L[i]);
    for (long long j = 0; j < L[i]; j++) {
      cin >> line[j];
    }
    A[i] = line;
  }

  for (long long i = 0; i < N; i++) {
    long long C;
    cin >> C;
    if (K - C * L[i] <= 0) {
      long long index = K % L[i] - 1;
      if (index < 0)
        index += A[i].size();
      cout << A[i][index] << endl;
      return 0;
    }
    K -= C * L[i];
  }
  return 0;
}
