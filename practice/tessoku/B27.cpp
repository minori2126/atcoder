#include <bits/stdc++.h>
using namespace std;

long long calc(long long A, long long B) {
  long long a = min(A, B), b = max(A, B);
  b = b % a;
  if (!b)
    return a;
  else
    return calc(a, b);
}

int main() {
  long long a, b;
  cin >> a >> b;

  cout << a * b / calc(a, b) << endl;
  return 0;
}
