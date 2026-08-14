#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> ans(M + 1);
  vector<vector<bool>> table(M + 1, vector<bool>(M + 1));
  queue<int> que;
  set<int> unique;

  for (int i = 0; i < M; i++) {
    int a, b, A, B;
    cin >> a >> b;
    A = a - 1;
    B = b - 1;
    table[A][B] = 1;
  }

  que.push(0);

  while (!que.empty()) {
    int a = que.front();
    que.pop();
    if (ans[a])
      continue;
    ans[a] = 1;
    for (int i = 0; i < M; i++) {
      if (table[a][i] && unique.find(i) == unique.end()) {
        que.push(i);
      }
    }
  }

  int num = 0;
  for (int i = 0; i < M; i++) {
    if (ans[i])
      num++;
  }

  cout << num;

  return 0;
}
