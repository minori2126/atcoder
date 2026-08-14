#include <bits/stdc++.h>
using namespace std;

long long sum(vector<int> &S, int L, int R) { return S[R] - S[L - 1]; }

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N + 9), S(N + 9), R(N + 9);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 1; i <= N; i++) {
    S[i] = S[i - 1] + A[i];
  }

  for (int i = 1; i <= N; i++) {
    if (i == 1)
      R[i] = 0;
    else
      R[i] = R[i - 1];

    while (R[i] < N && sum(S, i, R[i] + 1) <= K) {
      R[i]++;
    }
  }
  long long result = 0;

  for (int i = 1; i <= N; i++) {
    result += R[i] - i + 1;
  }
  cout << result << endl;
}
