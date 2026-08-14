#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  while (Q--) {
    int x;
    cin >> x;

    bool isPrime = 0;
    for (int i = 2; i <= sqrt(x); i++) {
      if (x % i == 0) {
        isPrime = 1;
        break;
      }
    }

    if (!isPrime)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
