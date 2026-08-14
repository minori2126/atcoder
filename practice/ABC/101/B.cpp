#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

int main() {
  int N;
  cin >> N;

  if (N % sum(N))
    cout << "No" << endl;
  else
    cout << "Yes" << endl;

  return 0;
}
