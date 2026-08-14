#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> S(H, vector<int>(W));
  int index = 1;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      char s;
      cin >> s;
      if (s == '#')
        S[i][j] = 0;
      else if (i == 0 || i == H - 1 || j == 0 || j == W - 1) {
        S[i][j] = -1;
      } else {
        S[i][j] = index;
        index++;
      }
    }
  }

  for (int i = 1; i < H - 1; i++) {
    for (int j = 1; j < W - 1; j++) {
      if (S[i][j]) {
        if (S[i - 1][j] == -1 || S[i][j - 1] == -1 || S[i + 1][j] == -1 ||
            S[i][j + 1] == -1) {
          S[i][j] = -1;
          cout << "S[" << i << "][" << j << "] = " << S[i][j] << " ";
        } else if (S[i - 1][j]) {
          S[i][j] = S[i - 1][j];
          cout << "S[" << i << "][" << j << "] = " << S[i][j] << " ";
        } else if (S[i][j - 1]) {
          S[i][j] = S[i][j - 1];
          cout << "S[" << i << "][" << j << "] = " << S[i][j] << " ";
        } else if (S[i][j + 1]) {
          S[i][j] = S[i][j + 1];
          cout << "S[" << i << "][" << j << "] = " << S[i][j] << " ";
        } else if (S[i + 1][j]) {
          S[i][j] = S[i + 1][j];
          cout << "S[" << i << "][" << j << "] = " << S[i][j] << " ";
        }
      }
    }
    cout << endl;
  }

  vector<int> list(H * W);
  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] > 0 && list[S[i][j]] == 0) {
        list[S[i][j]] = 1;
        ans++;
      }
      cout << S[i][j] << " ";
    }
    cout << endl;
  }

  cout << ans << endl;
  return 0;
}
