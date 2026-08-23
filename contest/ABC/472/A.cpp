#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'A')
      cout << 'A';
    else
      cout << '.';
  }
  cout << endl;
  return 0;
}
