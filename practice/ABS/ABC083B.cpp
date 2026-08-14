#include <bits/stdc++.h>
using namespace std;

int sum(int x) {
  int s = 0;
  while (x > 0) {
    s += x % 10;
    x /= 10;
  }
  return s;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;

  for (int i = 0; i <= N; i++) {
    if (sum(i) >= A && sum(i) <= B)
      ans += i;
  }

  cout << ans << endl;
  return 0;
}
