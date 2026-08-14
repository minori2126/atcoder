#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> P(1509, vector<int>(1509)), S(1509, vector<int>(1509));

int main() {
  int N;
  cin >> N;
  while (N--) {
    int x, y;
    cin >> x >> y;
    P[x][y] += 1;
  }

  for (int i = 1; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      S[i][j] = P[i][j] + S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1];
    }
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << S[c][d] - S[a - 1][d] - S[c][b - 1] + S[a - 1][b - 1] << endl;
  }
}
