#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> R(N), after(N);
    for (int i = 0; i < N; i++)
      cin >> R[i];
    after = R;
    for (int i = 1; i < N; i++) {
      if (after[i] > after[i - 1])
        after[i] = after[i - 1] + 1;
    }
    for (int i = N - 2; i >= 0; i--) {
      if (after[i] > after[i + 1])
        after[i] = after[i + 1] + 1;
    }
    long long ans = 0;
    for (int i = 0; i < N; i++)
      ans += R[i] - after[i];
    cout << ans << endl;
  }

  return 0;
}
