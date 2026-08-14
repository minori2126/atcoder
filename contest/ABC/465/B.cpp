#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, L, R, A, B;
  cin >> X >> Y >> L >> R >> A >> B;
  int ans = 0;
  for (int i = A + 1; i <= B; i++) {
    if (i > L && i <= R)
      ans += X;
    else
      ans += Y;
  }
  cout << ans << endl;
  return 0;
}
