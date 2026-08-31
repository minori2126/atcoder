#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(int N, int K, vector<int> &A) {
  if (N == 1) {
    A.push_back(K);
    vector<int> rev = A;
    reverse(rev.begin(), rev.end());
    ans.push_back(rev);
    A.pop_back();
    return;
  }

  for (int i = K / N; i >= 0; i--) {
    A.push_back(i);
    solve(N - 1, K - i * N, A);
    A.pop_back();
  }
}

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A;
  solve(N, K, A);

  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < N; j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
