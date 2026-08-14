#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n && n != 0) {
    string s;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
      if (s.substr(0, i) == s.substr(n - i, i)) {
        cout << s.substr(0, n - i) << s << endl;
        break;
      }
    }
  }
  return 0;
}
