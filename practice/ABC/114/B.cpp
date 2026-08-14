#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sub = (1 << 30);
  for (int i = 0; i < S.size() - 2; i++) {
    int tmp = stoi(S.substr(i, 3));
    if (abs(tmp - 753) < sub) {
      sub = abs(tmp - 753);
    }
  }
  cout << sub << endl;
  return 0;
}
