#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long Power(long long a, long long b) {
  long long p = a, ans = 1;
  for (int i = 0; i < 60; i++) {
    if (b & (1LL << i))
      ans = (ans * p) % MOD;
    p = (p * p) % MOD;
  }
  return ans;
}

int main() {
  long long a, b;
  cin >> a >> b;

  cout << Power(a, b) << endl;
  return 0;
}
