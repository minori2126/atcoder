#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<long long> sum(N);
    long long P = 0;
    for (int i = 0; i < N; i++) {
      int w, p;
      cin >> w >> p;
      P += p;
      sum[i] = w + p;
    }

    sort(sum.begin(), sum.end());

    long long ans = 0, S = 0;
    while (ans < N) {
      if (P >= S + sum[ans])
        S += sum[ans];
      else
        break;
      ans++;
    }

    cout << ans << endl;
  }
  return 0;
}
