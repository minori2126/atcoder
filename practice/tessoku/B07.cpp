#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, N;
  cin >> T >> N;
  vector<int> num(T);
  while (N--) {
    int L, R;
    cin >> L >> R;
    num[L] += 1;
    num[R] -= 1;
  }
  vector<int> ans(T + 1);
  for (int i = 1; i <= T; i++) {
    ans[i] = ans[i - 1] + num[i - 1];
    cout << ans[i] << endl;
  }
}
