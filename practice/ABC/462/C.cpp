#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> X(N + 1, N);
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    X[x] = y;
  }

  int ans = 0, minx = N;
  for (int i = 1; i < N + 1; i++) {
    minx = min(minx, X[i]);
    if (X[i] <= minx)
      ans++;
  }

  cout << ans << endl;
  return 0;
}
