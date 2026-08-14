#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    vector<int> x(4), y(4);
    for (int i = 0; i < 4; i++)
      cin >> x[i] >> y[i];
    if ((x[0] - x[1]) * (y[1] - y[2]) - (x[1] - x[2]) * (y[0] - y[1]) == 0) {
      cout << "No" << endl;
      continue;
    }
    if ((x[1] - x[2]) * (y[2] - y[3]) - (x[2] - x[3]) * (y[1] - y[2]) == 0) {
      cout << "No" << endl;
      continue;
    }
    float center_x1 = (y[2] * (x[1] * x[1] + y[1] * y[1]) -
                       y[1] * (x[2] * x[2] + y[2] * y[2])) /
                      2 return 0;
  }
