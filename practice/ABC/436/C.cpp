#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  set<pair<int, int>> block;
  int dx[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
  int dy[9] = {0, 1, 1, 0, -1, -1, -1, 1, 0};

  while (M--) {
    int R, C;
    cin >> R >> C;
    bool flag = 1;
    for (int i = 0; i < 9; i++) {
      if (R + dx[i] >= 0 && R + dx[i] < N && C + dy[i] >= 0 && C + dy[i] < N)
        if (block.find({R + dx[i], C + dy[i]}) != block.end())
          flag = 0;
    }
    if (flag)
      block.insert({R, C});
  }

  cout << block.size() << endl;

  return 0;
}
