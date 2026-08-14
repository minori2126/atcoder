#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a = N / 100;
  int ans = a * 100 + a * 10 + a;

  if (ans >= N)
    cout << ans << endl;
  else
    cout << ans + 111 << endl;

  return 0;
}
