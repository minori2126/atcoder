#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, G;
  cin >> D >> G;
  vector<int> p(D), c(D);
  for (int i = 0; i < D; i++)
    cin >> p[i] >> c[i];

  int ans = (1 << 30);

  for (int i = 0; i < (1 << D); i++) {
    long long score = 0;
    int cnt = 0;

    for (int j = 0; j < D; j++) {
      if (i & (1 << j)) {
        score += c[j];
        score += 100 * p[j] * (j + 1);
        cnt += p[j];
      }
    }

    if (score < G) {
      for (int k = D - 1; k >= 0; k--) {
        if (i & (1 << k))
          continue;
        int need = (G - score + 100 * (k + 1) - 1) / (100 * (k + 1));
        if (need <= p[k]) {
          cnt += need;
          score = G;
          break;
        } else {
          cnt += p[k];
          score += 100 * (k + 1) * p[k];
        }
      }
    }

    if (score >= G)
      ans = min(ans, cnt);
  }
  cout << ans << endl;
}
