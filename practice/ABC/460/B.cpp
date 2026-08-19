#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    long long x1, y1, r1, x2, y2, r2;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    long long dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    if (dist <= (r1 + r2) * (r1 + r2) && dist >= (r1 - r2) * (r1 - r2))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
