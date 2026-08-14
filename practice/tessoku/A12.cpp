#include <bits/stdc++.h>
using namespace std;

int check(vector<int> &A, int X, int K) {
  long long m = 0;
  for (int i = 0; i < A.size(); i++) {
    m += X / A[i];
  }
  if (m < K)
    return 0;
  else
    return 1;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int L = 1, R = 1000000000, mid;
  while (L < R) {
    mid = (L + R) / 2;
    if (check(A, mid, K))
      R = mid;
    else
      L = mid + 1;
  }
  cout << L << endl;
}
