#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> sum(101);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    sum[a]++;
  }
  int ans = 0;
  for (int i = 0; i <= 100; i++) {
    ans += i * (sum[i] % 2);
  }

  cout << ans << endl;
  return 0;
}
