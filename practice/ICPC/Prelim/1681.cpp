#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n;
    cin >> n;
    if (!n)
      break;
    int sum = (n + 1) * n / 2;
    cout << sum * sum << endl;
  }
  return 0;
}
