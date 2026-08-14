#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, Q;
  cin >> H >> W >> Q;
  vector<vector<int>> B(H, vector<int>(W, 1));

  while (Q--) {
    int t, n, answer = 0;
    cin >> t >> n;
    if (t == 1) {
      H -= n;
      for (int i = H; i < H + n; i++) {
        for (int j = 0; j < W; j++) {
          if (B[i][j]) {
            B[i][j] = 0;
            answer += 1;
          }
        }
      }
    } else {
      W -= n;
      for (int j = W; j < W + n; j++) {
        for (int i = 0; i < H; i++) {
          if (B[i][j]) {
            B[i][j] = 0;
            answer += 1;
          }
        }
      }
    }
    cout << answer << endl;
  }

  return 0;
}
