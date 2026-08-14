#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  cin >> Q;
  while (Q--) {
    int X;
    cin >> X;
    cout << (lower_bound(A.begin(), A.end(), X) - A.begin()) << endl;
  }
}
