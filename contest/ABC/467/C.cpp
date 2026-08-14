#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N - 1);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N - 1; i++)
    cin >> B[i];
  vector<bool> T(N - 1);
  for (int i = 0; i < N - 1; i++)
    T[i] = (A[i] + A[i + 1]) % 2 == B[i];
  int ans1 = 0, ans2 = 0;
  int temp = 0;
  for (int i = 0; i < N - 1; i++) {
    if (temp % 2 == 1)
      ans1++;
    if (!T[i])
      temp++;
  }
  if (temp % 2 == 1)
    ans1++;
  cout << min(ans1, N - ans1) << endl;
  return 0;
}
