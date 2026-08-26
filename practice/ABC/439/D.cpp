#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  map<long long, long long> c;
  long long ans = 0;
  for (long long i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] % 5 == 0)
      ans += c[3 * (A[i] / 5)] * c[7 * (A[i] / 5)];
    c[A[i]]++;
  }
  c.clear();
  for (long long i = N - 1; i >= 0; i--) {
    if (A[i] % 5 == 0)
      ans += c[3 * (A[i] / 5)] * c[7 * (A[i] / 5)];
    c[A[i]]++;
  }
  cout << ans << endl;
  return 0;
}
