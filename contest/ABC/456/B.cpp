#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> num(3, vector<int>(7));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      int a;
      cin >> a;
      num[i][a]++;
    }
  }
  float val = num[0][4] * (num[1][5] * num[2][6] + num[2][5] * num[1][6]) +
              num[0][5] * (num[1][4] * num[2][6] + num[2][4] * num[1][6]) +
              num[0][6] * (num[1][4] * num[2][5] + num[2][4] * num[1][5]);
  cout << val / (6.0 * 6.0 * 6.0) << endl;
  return 0;
}
