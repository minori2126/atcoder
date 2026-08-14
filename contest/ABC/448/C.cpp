#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> A_sorted = A;
  sort(A_sorted.begin(), A_sorted.end());

  while (Q--) {
    int K;
    cin >> K;
    vector<int> B(K);
    for (int i = 0; i < K; i++) {
      cin >> B[i];
      B[i] = A[B[i] - 1];
    }
    sort(B.begin(), B.end());
    int i = 0;
    while (i < K) {
      if (A_sorted[i] == B[i])
        i++;
      else
        break;
    }
    cout << A_sorted[i] << endl;
  }
  return 0;
}
