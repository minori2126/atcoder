#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> S(N + 1);
  for (int i = 1; i <= N; i++) {
    S[i] = S[i - 1] + A[i - 1];
  }
  cin >> Q;
  while (Q--) {
    int L, R;
    cin >> L >> R;
    int sum = S[R] - S[L - 1];
    if (sum * 2 > R - L + 1) {
      cout << "win" << endl;
    } else if (sum * 2 < 1 + R - L) {
      cout << "lose" << endl;
    } else {
      cout << "draw" << endl;
    }
  }
}
