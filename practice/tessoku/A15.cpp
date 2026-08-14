#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  vector<int> T(N);
  for (int i = 0; i < N; i++)
    T.push_back(A[i]);
  sort(T.begin(), T.end());

  T.erase(unique(T.begin(), T.end()), T.end());

  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
    cout << B[i] << " ";
  }
}
