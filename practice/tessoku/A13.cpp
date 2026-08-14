#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N + 9), R(N + 9);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    if (i == 0)
      R[i] = 0;
    else
      R[i] = R[i - 1];

    while (R[i] + 1 < N && A[R[i] + 1] - A[i] <= K) {
      R[i]++;
    }
  }

  long long result = 0;
  for (int i = 0; i < N; i++) {
    result += R[i] - i;
  }
  cout << result << endl;
}
