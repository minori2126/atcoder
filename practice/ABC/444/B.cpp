#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;

  for (int i = 1; i <= N; i++) {
    string num = to_string(i);
    int val = 0;
    for (int j = 0; j < num.size(); j++)
      val += num[j] - '0';
    if (K == val)
      ans++;
  }

  cout << ans << endl;
  return 0;
}
