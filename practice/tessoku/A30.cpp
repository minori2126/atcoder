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

long long Division(long long a, long long b) {
  return (a * Power(b, MOD - 2)) % MOD;
}

int main() {
  long long n, r;
  cin >> n >> r;

  long long a = 1;
  for (int i = 1; i <= n; i++)
    a = (a * i) % MOD;

  long long b = 1;
  for (int i = 1; i <= r; i++)
    b = (b * i) % MOD;
  for (int i = 1; i <= n - r; i++)
    b = (b * i) % MOD;

  cout << Division(a, b) << endl;
  return 0;
}
