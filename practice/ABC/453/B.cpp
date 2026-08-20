#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, X;
  cin >> T >> X;
  vector<int> A(T + 1);
  for (int i = 0; i < T + 1; i++) {
    cin >> A[i];
  }

  int temp = A[0];
  cout << "0 " << temp << endl;

  for (int i = 1; i < T + 1; i++) {
    if (abs(A[i] - temp) >= X) {
      temp = A[i];
      cout << i << " " << temp << endl;
    }
  }

  return 0;
}
