#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  while (cin >> n >> m && (n || m)) {
    long long ans = m / 7 * 5;
    long long last = m % 7;
    ans += min(last, 5LL);
    set<long long> a;
    for (int i = 0; i < n; i++) {
      long long b;
      cin >> b;
      a.insert(b);
    }
    for (long long day : a) {
      if (day <= m && day % 7 != 6 && day % 7 != 0)
        ans--;
    }
    cout << ans << endl;
  }
  return 0;
}
