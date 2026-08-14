#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int C = 0;
  for (int i = 2; i <= S.size() - 2; i++) {
    if (S[i] == 'C')
      C++;
  }

  int upper = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] >= 'A' && S[i] <= 'Z')
      upper++;
  }

  if (S[0] == 'A' && C == 1 && upper == 2)
    cout << "AC" << endl;
  else
    cout << "WA" << endl;

  return 0;
}
