#include <bits/stdc++.h>
using namespace std;

long long Power(long long a, long long b) {
  long long p = a, ans = 1;
  for (int i = 0; i < 30; i++) {
    if (b & 1 << i)
      ans = (ans * p) % 1000000007;
    p = (p * p) % 1000000007;
  }
  return ans;
}

int main() {
  long long a, b;
  cin >> a >> b;
  cout << Power(a, b) << endl;
}
