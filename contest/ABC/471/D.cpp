#include <bits/stdc++.h>
using namespace std;

int main() {
  long long Q, V;
  cin >> Q >> V;
  multiset<long long, greater<long long>> battery;

  while (Q--) {
    int m;
    cin >> m;
    if (m == 1) {
      long long t, w;
      cin >> t >> w;
      battery.insert(w - t);
    } else {
      if (battery.size() == 0) {
        cout << -1 << endl;
        int t;
        cin >> t;
        continue;
      }
      long long t;
      cin >> t;
      long long ans = *battery.begin() + t;
      battery.erase(battery.begin());
      cout << min(ans, V) << endl;
    }
  }
  return 0;
}
