#include <assert.h>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int serch(vector<int> A, int X) {
  int N = A.size(), L = 0, R = N - 1;
  while (L <= R) {
    int mid = (L + R) / 2;
    if (A[mid] > X)
      R = mid - 1;
    else if (A[mid] < X)
      L = mid + 1;
    else
      return mid;
  }
  return -1;
}

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  cout << serch(A, X) + 1;
}
