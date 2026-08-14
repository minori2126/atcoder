#include <bits/stdc++.h>
using namespace std;

long long rev(long long a) {
  long long ans = 0, x = 0, A = a;
  while (A > 0) {
    x++;
    A /= 10;
  }
  for (int i = 0; i < x; i++) {
    ans += (a % 10) * pow(10, x - i - 1);
    a /= 10;
  }
  return ans;
}

long long calc(long long X, long long Y) {
  vector<long long> ans(10);
  ans[0] = X;
  ans[1] = Y;
  for (long long i = 2; i < 10; i++) {
    ans[i] = rev(ans[i - 1] + ans[i - 2]);
  }
  return ans[9];
}

int main() {
  long long X, Y;
  cin >> X >> Y;
  cout << calc(X, Y) << endl;
  return 0;
}
