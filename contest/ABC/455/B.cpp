#include <bits/stdc++.h>
using namespace std;

vector<string> grid(11);

int check(int i, int j, int k, int l) {
  for (int m = i; m <= k; m++) {
    for (int n = j; n <= l; n++) {
      if (grid[m][n] != grid[i + k - m][j + l - n]) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  int H, W;
  cin >> H >> W;
  for (int i = 0; i < H; i++)
    cin >> grid[i];
  long long ans = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {

      for (int k = i; k < H; k++) {
        for (int l = j; l < W; l++) {
          if (check(i, j, k, l))
            ans++;
        }
      }
    }
  }

  cout << ans;
  return 0;
}
