#include <bits/stdc++.h>
using namespace std;

int N, M, L, S, T;
vector<vector<pair<int, int>>> gragh;
vector<set<int>> costs;

void dfs(int v, int step, int cost) {
  if (step == L) {
    costs[v].insert(cost);
    return;
  }
  for (auto &edge : gragh[v]) {
    dfs(edge.first, step + 1, edge.second + cost);
  }
}

int main() {
  cin >> N >> M >> L >> S >> T;
  gragh.resize(N + 1);
  costs.resize(N + 1);

  for (int i = 0; i < M; i++) {
    int u, v, c;
    cin >> u >> v >> c;
    gragh[u].push_back({v, c});
  }

  dfs(1, 0, 0);

  vector<int> ans;
  for (int i = 1; i <= N; i++) {
    bool flag = 0;
    for (int cost : costs[i]) {
      if (cost >= S && cost <= T) {
        flag = 1;
        break;
      }
    }
    if (flag)
      ans.push_back(i);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}
