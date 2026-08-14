#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 9);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  vector<int> LM(N + 9), RM(N + 9);
  for (int i = 1; i <= N; i++) {
    LM[i] = max(LM[i - 1], A[i]);
  }
  for (int i = N; i > 0; i--) {
    RM[i] = max(RM[i + 1], A[i]);
  }
  int D;
  cin >> D;
  while (D--) {
    int L, R;
    cin >> L >> R;
    cout << max(LM[L - 1], RM[R + 1]) << endl;
  }
}
