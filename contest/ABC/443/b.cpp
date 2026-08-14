#include <bits/stdc++.h>
using namespace std;

long long arith(long long N) { return N * (1 + N) / 2; }

int main() {
  long long N, K;
  cin >> N >> K;

  long long i = N;
  while ((arith(i) - arith(N - 1)) <= K) {
    i++;
  }
  cout << i - N << endl;
  return 0;
}
