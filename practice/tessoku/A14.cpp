#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N), C(N), D(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N; i++)
    cin >> B[i];
  for (int i = 0; i < N; i++)
    cin >> C[i];
  for (int i = 0; i < N; i++)
    cin >> D[i];

  vector<int> P(N * N), Q(N * N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      P[i * N + j] = A[i] + B[j];
      Q[i * N + j] = C[i] + D[j];
    }
  }
  sort(P.begin(), P.end());
  sort(Q.begin(), Q.end());

  for (int i = 0; i < N * N; i++) {
    int j = lower_bound(Q.begin(), Q.end(), K - P[i]) - Q.begin();
    if (j < N * N && Q[j] == K - P[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
