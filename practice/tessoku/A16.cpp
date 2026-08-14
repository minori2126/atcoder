#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N - 1), B(N - 2), DP(N);
  for (int i = 0; i < N - 1; i++)
    cin >> A[i];
  for (int i = 0; i < N - 2; i++)
    cin >> B[i];

  DP[1] = A[0];
  for (int i = 2; i < N; i++) {
    DP[i] = min(DP[i - 1] + A[i - 1], DP[i - 2] + B[i - 2]);
  }
  cout << DP[N - 1] << endl;
}
