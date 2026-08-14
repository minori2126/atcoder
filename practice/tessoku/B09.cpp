#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

vector<vector<int>> X(1509, vector<int>(1509));
int main() {
  int N;
  cin >> N;
  while (N--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    X[a][b] += 1;
    X[a][d] -= 1;
    X[c][b] -= 1;
    X[c][d] += 1;
  }

  for (int i = 0; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      X[i][j] += X[i][j - 1];
    }
  }
  for (int j = 0; j <= 1500; j++) {
    for (int i = 1; i <= 1500; i++) {
      X[i][j] += X[i - 1][j];
    }
  }

  int ans = 0;
  for (int i = 0; i <= 1500; i++) {
    for (int j = 0; j <= 1500; j++) {
      if (X[i][j] > 0)
        ans++;
    }
  }
  cout << ans << endl;
}
