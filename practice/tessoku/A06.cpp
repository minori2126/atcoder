#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> S(N + 1);
  for (int i = 1; i <= N; i++) {
    S[i] = A[i - 1] + S[i - 1];
  }

  while (Q--) {
    int L, R;
    cin >> L >> R;
    cout << S[R] - S[L - 1] << endl;
  }
}
