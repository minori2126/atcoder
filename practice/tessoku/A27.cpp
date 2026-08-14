#include <bits/stdc++.h>
using namespace std;

int GCD(int A, int B) {
  int a = min(A, B), b = max(A, B);
  b = b % a;
  if (!b)
    return a;
  else
    return GCD(a, b);
}

int main() {
  int A, B;
  cin >> A >> B;

  cout << GCD(A, B);
}
