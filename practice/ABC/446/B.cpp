#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  // vector<vector<int>> X(N);
  vector<int> check(M + 1, 1);
  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    int skip = 0;
    for (int j = 0; j < L; j++) {
      int x;
      cin >> x;
      if (check[x] && !skip) {
        cout << x << endl;
        check[x] = 0;
        skip = 1;
      }
      if (j == L - 1 && !skip)
        cout << "0" << endl;
    }
  }

  return 0;
}
