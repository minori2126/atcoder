#include <bits/stdc++.h>
using namespace std;

int main() {
  long long D, N;
  cin >> D >> N;

  if (N == 100)
    N++;
  long long a = 1;
  for (long long i = 0; i < D; i++)
    a *= 100;

  cout << a * N << endl;
  return 0;
}
