#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++)
    cin >> A[i] >> B[i];
  int M;
  cin >> M;
  vector<vector<vector<int>>> exist(11,
                                    vector<vector<int>>(11, vector<int>(255)));
  vector<string> S(M);
  for (int i = 0; i < M; i++) {
    cin >> S[i];
    for (int j = 0; j < S[i].size(); j++) {
      exist[j][S[i].size()][S[i][j]] = 1;
    }
  }

  for (int i = 0; i < M; i++) {
    if (S[i].size() == N) {
      for (int j = 0; j < N; j++) {
        if (exist[B[j] - 1][A[j]][S[i][j]] == 0) {
          cout << "No" << endl;
          break;
        }
        if (j == N - 1)
          cout << "Yes" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
