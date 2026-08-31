#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  vector<vector<pair<int, int>>> warp(26);

  for (int i = 0; i < H; i++) {
    cin >> S[i];
    for (int j = 0; j < W; j++) {
      if (S[i][j] >= 'a' && S[i][j] <= 'z') {
        warp[S[i][j] - 'a'].push_back({i, j});
      }
    }
  }

  vector<vector<int>> dist(H, vector<int>(W, -1));
  vector<bool> warped(26, false);

  queue<pair<int, int>> q;
  dist[0][0] = 0;
  q.push({0, 0});

  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  while (!q.empty()) {
    auto [r, c] = q.front();
    q.pop();

    if (r == H - 1 && c == W - 1) {
      cout << dist[r][c] << endl;
      return 0;
    }

    for (int i = 0; i < 4; i++) {
      if (r + dx[i] >= 0 && r + dx[i] < H && c + dy[i] >= 0 && c + dy[i] < W) {
        if (S[r + dx[i]][c + dy[i]] != '#' &&
            dist[r + dx[i]][c + dy[i]] == -1) {
          dist[r + dx[i]][c + dy[i]] = dist[r][c] + 1;
          q.push({r + dx[i], c + dy[i]});
        }
      }
    }

    if (S[r][c] >= 'a' && S[r][c] <= 'z') {
      int index = S[r][c] - 'a';

      if (!warped[index]) {
        warped[index] = true;

        for (auto [wr, wc] : warp[index]) {
          if (dist[wr][wc] == -1) {
            dist[wr][wc] = dist[r][c] + 1;
            q.push({wr, wc});
          }
        }
      }
    }
  }

  cout << "-1" << endl;
  return 0;
}
