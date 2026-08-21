#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1);
  for (int i = 0; i < N; i++) {
    cin >> A[i + 1];
  }

  for (int i = N; i > 0; i--) {
    A[i] = A[A[i]];
  }

  for (int i = 0; i < N; i++) {
    cout << A[i + 1] << " ";
  }
  cout << endl;
  return 0;
}
