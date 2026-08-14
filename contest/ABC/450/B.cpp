#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> C(N - 1, vector<int>(N));
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      cin >> C[i][j];
    }
  }

  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = i + 1; k < j; k++) {
        if (C[i][j] > C[i][k] + C[k][j]) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;

  return 0;
}
