#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> a(H);
  for (int i = 0; i < H; i++)
    cin >> a[i];

  vector<string> b;
  for (int i = 0; i < H; i++) {
    if (a[i].find('#') != string::npos)
      b.push_back(a[i]);
  }

  if (!b.empty()) {
    int W2 = b[0].size();
    vector<int> keep(W2);
    for (int i = 0; i < W2; i++) {
      for (auto &row : b) {
        if (row[i] == '#')
          keep[i] = 1;
      }
    }

    for (auto &row : b) {
      string tmp;
      for (int i = 0; i < W2; i++) {
        if (keep[i])
          tmp += row[i];
      }
      row = tmp;
    }
  }
  for (auto row : b)
    cout << row << endl;
}
