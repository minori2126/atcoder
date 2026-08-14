#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> ans(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (i == 0 || i == H - 1) {
        cout << "#";
      } else if (j == 0 || j == W - 1) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }

  return 0;
}
