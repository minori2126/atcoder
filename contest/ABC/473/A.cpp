#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (i >= N / 2)
      ans += a;
  }
  cout << ans << endl;
  return 0;
}
