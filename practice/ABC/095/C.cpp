#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int ans = (1 << 30);

  for (int i = 0; i <= 2 * max(X, Y); i++) {
    ans = min(ans, i * C + A * max(0, X - i / 2) + B * max(0, Y - i / 2));
  }
  cout << ans << endl;
  return 0;
}
