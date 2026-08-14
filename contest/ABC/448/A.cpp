#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int A;
  for (int i = 0; i < N; i++) {
    cin >> A;
    if (X > A) {
      cout << 1 << endl;
      X = A;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}
