#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int A = 0, B = 0, C = 0;
  for (char l : S) {
    if (l == 'A')
      A++;
    if (A > 0 && l == 'B') {
      B++;
      A--;
    }
    if (l == 'C' && B > 0) {
      C++;
      B--;
    }
  }
  cout << C << endl;

  return 0;
}
