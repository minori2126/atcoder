#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int prev = 0, ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    ans++;
    prev = max(prev - 1, a);
    if (prev == 1)
      break;
  }

  cout << ans << endl;
  return 0;
}
