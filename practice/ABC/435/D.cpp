#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N + 1);

  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    G[y].push_back(x);
  }

  vector<bool> visible(N + 1, false);
  queue<int> q;

  int Q;
  cin >> Q;
  while (Q--) {
    int type, v;
    cin >> type >> v;
    if (type == 1) {
      if (!visible[v]) {
        visible[v] = true;
        q.push(v);

        while (!q.empty()) {
          int current = q.front();
          q.pop();

          for (int next : G[current]) {
            if (!visible[next]) {
              visible[next] = 1;
              q.push(next);
            }
          }
        }
      }
    } else {
      if (visible[v])
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }

  return 0;
}
