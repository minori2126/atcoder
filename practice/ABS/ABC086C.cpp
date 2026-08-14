#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X = 0, Y = 0, T = 0;
  cin >> N;

  while (N--) {
    int t, x, y;
    cin >> t >> x >> y;
    if (abs(X - x) + abs(Y - y) <= t - T &&
        (abs(X - x) + abs(Y - y)) % 2 == (t - T) % 2) {
      X = x;
      Y = y;
      T = t;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
