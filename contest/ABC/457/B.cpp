#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N);
  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    vector<int> line(L);
    for (int j = 0; j < L; j++) {
      cin >> line[j];
    }
    A[i] = line;
  }
  int X, Y;
  cin >> X >> Y;
  cout << A[X - 1][Y - 1] << endl;
  return 0;
}
