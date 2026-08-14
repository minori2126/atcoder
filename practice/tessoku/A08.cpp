#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> X(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> X[i][j];
    }
  }

  vector<vector<int>> S(H + 1, vector<int>(W + 1));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + X[i - 1][j - 1];
    }
  }

  int Q;
  cin >> Q;

  while (Q--) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << S[C][D] - S[C][B - 1] - S[A - 1][D] + S[A - 1][B - 1] << endl;
  }
}
