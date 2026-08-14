#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<bool>> C(H, vector<bool>(W));
  for (int i = 0; i < H; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < W; j++) {
      if (S[j] == '.')
        C[i][j] = true;
    }
  }

  int top = 0, right = W, bottom = H, left = 0;
  for (int i = 0; i < H; i++) {
    bool flag = 1;
    for (int j = 0; j < W; j++) {
      if (!C[i][j])
        flag = 0;
    }
    if (flag)
      top++;
    else
      break;
  }
  for (int i = H - 1; i > top; i--) {
    bool flag = 1;
    for (int j = 0; j < W; j++) {
      if (!C[i][j])
        flag = 0;
    }
    if (flag)
      bottom--;
    else
      break;
  }
  for (int j = 0; j < right; j++) {
    bool flag = 1;
    for (int i = top; i < bottom; i++) {
      if (!C[i][j])
        flag = 0;
    }
    if (flag)
      left++;
    else
      break;
  }
  for (int j = W - 1; j > left; j--) {
    bool flag = 1;
    for (int i = top; i < bottom; i++) {
      if (!C[i][j])
        flag = 0;
    }
    if (flag)
      right--;
    else
      break;
  }

  for (int i = top; i < bottom; i++) {
    for (int j = left; j < right; j++) {
      if (C[i][j])
        cout << ".";
      else
        cout << "#";
    }
    cout << endl;
  }
  return 0;
}
