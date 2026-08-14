#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long ans = 0;
  while (N--) {
    long long a;
    char t;
    cin >> t >> a;
    if (t == '+')
      ans += a;
    else if (t == '-')
      ans -= a;
    else if (t == '*')
      ans *= a;

    if (ans < 0)
      ans += 10000;
    ans %= 10000;
    cout << ans << endl;
  }
  return 0;
}
