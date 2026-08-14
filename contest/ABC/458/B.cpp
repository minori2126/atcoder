#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      int num = 0;
      if (H > 1)
        num++;
      if (W > 1)
        num++;
      if (i != 0 && i != H - 1)
        num++;
      if (j != 0 && j != W - 1)
        num++;
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
