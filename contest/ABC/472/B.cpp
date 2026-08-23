#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }
  int ans = 1000000;
  for (int i = 0; i < N; i++) {
    int left = 0, right = 0;
    for (int j = 0; j < N; j++) {
      if (j <= i)
        left += L[j];
      else
        right += L[j];
    }
    ans = min(ans, abs(right - left));
  }
  cout << ans << endl;

  return 0;
}
