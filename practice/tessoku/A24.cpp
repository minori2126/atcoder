#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), dp(N, -(1 << 30));
  for (int i = 0; i < N; i++)
    cin >> A[i];

  dp[0] = 1;
