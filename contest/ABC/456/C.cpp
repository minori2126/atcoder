#include <bits/stdc++.h>
using namespace std;

long long sum(long long num) { return num * (1 + num) / 2; }

int main() {
  string S;
  cin >> S;
  long long ans = 0;
  long long start = 0;
  for (long long i = 1; i < S.size(); i++) {
    if (S[i - 1] == S[i]) {
      ans += sum(i - start);
      start = i;
    }
    if (i == S.size() - 1) {
      ans += sum(i - start + 1);
    }
    ans %= 998244353;
  }
  if (S.size() == 1)
    ans = 1;
  cout << ans << endl;
  return 0;
}
