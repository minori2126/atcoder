#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<vector<int>> M(H + 9, vector<int>(W + 9)),
      S(H + 9, vector<int>(W + 9));

  while (N--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    M[a][b] += 1;
    M[a][d + 1] -= 1;
    M[c + 1][b] -= 1;
    M[c + 1][d + 1] += 1;
  }

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      S[i][j] = M[i][j] + S[i][j - 1];
    }
  }
  for (int j = 1; j <= W; j++) {
    for (int i = 1; i <= H; i++) {
      S[i][j] += S[i - 1][j];
    }
  }
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (j > 1)
        cout << " ";
      cout << S[i][j];
    }
    cout << endl;
  }
}
