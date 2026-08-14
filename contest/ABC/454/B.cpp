#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> F(N), q1(M);
  for (int i = 0; i < N; i++) {
    cin >> F[i];
    q1[F[i] - 1]++;
  }

  int flag[2];
  flag[0] = 0;
  flag[1] = 0;

  for (int i = 0; i < M; i++) {
    if (q1[i] > 1) {
      break;
    }
    if (i == M - 1)
      flag[0] = 1;
  }

  for (int i = 0; i < M; i++) {
    if (q1[i] == 0)
      break;
    if (i == M - 1)
      flag[1] = 1;
  }

  for (int i = 0; i < 2; i++) {
    if (flag[i])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}
