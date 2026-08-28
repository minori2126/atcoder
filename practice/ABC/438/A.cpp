#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, F;
  cin >> D >> F;
  int ans = D / 7;
  ans *= 7;
  ans -= D;
  ans += F;
  if (ans <= 0)
    ans += 7;
  cout << ans << endl;
}
