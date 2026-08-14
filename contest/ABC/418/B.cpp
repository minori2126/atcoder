#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  double ans = 0;
  for (int i = 0; i < S.size(); i++) {
    for (int j = S.size() - 1; j > i + 1; j--) {
      if (S[i] == 't' && S[j] == 't') {
        int t = j - i + 1;
        int x = 0;
        for (int k = i; k <= j; k++) {
          if (S[k] == 't')
            x++;
        }
        double rate = double(x - 2) / double(t - 2);
        if (ans < rate)
          ans = rate;
      }
    }
  }
  cout << fixed << setprecision(15) << ans;

  return 0;
}
