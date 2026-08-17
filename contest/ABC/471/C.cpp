#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> plus;
  set<int, greater<int>> minus;
  for (int i = 0; i < N; i++) {
    int t;
    cin >> t;
    if (t > 0)
      plus.insert(t);
    else
      minus.insert(t);
  }

  long long ans = 0;
  int now = 0;
  for (int i = 0; i < N; i++) {
    if (plus.size() == 0 && minus.size() == 0)
      break;

    if (plus.size() != 0 && minus.size() != 0) {
      int dist1 = *plus.begin() - now;
      int dist2 = now - *minus.begin();

      if (dist1 < dist2) {
        int p = *plus.begin();
        plus.erase(plus.begin());
        now = p;
        ans += dist1;
      } else {
        int p = *minus.begin();
        minus.erase(minus.begin());
        now = p;
        ans += dist2;
      }
    } else if (plus.size() == 0) {
      int dist = now - *minus.begin();
      int p = *minus.begin();
      minus.erase(minus.begin());
      now = p;
      ans += dist;
    } else {
      int dist = *plus.begin() - now;
      int p = *plus.begin();
      plus.erase(plus.begin());
      now = p;
      ans += dist;
    }
  }

  cout << ans << endl;
  return 0;
}
