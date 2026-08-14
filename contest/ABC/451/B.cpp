#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    A[a]++;
    B[b]++;
  }

  for (int i = 1; i <= M; i++) {
    cout << B[i] - A[i] << endl;
  }

  return 0;
}
