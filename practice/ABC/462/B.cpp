#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> ans(N);
  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;
    for (int k = 0; k < K; k++) {
      int a;
      cin >> a;
      ans[a - 1].push_back(i + 1);
    }
  }
  for (int i = 0; i < N; i++) {
    cout << ans[i].size() << " ";
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    if (ans[i].size() == 0)
      cout << endl;
  }
  return 0;
}
