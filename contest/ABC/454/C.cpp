#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> ans(N);
  vector<vector<int>> table(N);
  queue<int> que;

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    table[a - 1].push_back(b - 1);
  }

  que.push(0);
  while (!que.empty()) {
    int a = que.front();
    que.pop();
    if (ans[a])
      continue;
    ans[a] = 1;
    for (int i = 0; i < table[a].size(); i++) {
      if (!ans[table[a][i]])
        que.push(table[a][i]);
    }
  }

  int num = 0;
  for (int i = 0; i < N; i++) {
    if (ans[i])
      num++;
  }

  cout << num;
  return 0;
}
