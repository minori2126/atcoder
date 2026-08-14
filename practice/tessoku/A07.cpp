#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, N;
  cin >> D >> N;
  vector<int> num(D);
  while (N--) {
    int L, R;
    cin >> L >> R;
    num[L - 1] += 1;
    num[R] -= 1;
  }
  vector<int> S(D + 1);
  for (int i = 1; i <= D; i++) {
    S[i] = S[i - 1] + num[i - 1];
    cout << S[i] << endl;
  }
  return 0;
}
