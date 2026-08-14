#include <bits/stdc++.h>
using namespace std;

int calc(int N) {
  int ans = 0;
  for (int i = 2; i < N; i++) {
    if (N % i == 0)
      ans++;
  }
  return ans + 2;
}

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i += 2) {
    if (calc(i) == 8)
      ans++;
  }

  cout << ans << endl;
  return 0;
}
