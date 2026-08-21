#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N), ans;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A.rbegin(), A.rend());

  long long s = 0, temp = A[0];
  for (int i = 0; i < N; i++) {
    if (A[i] == temp) {
      s++;
      if (i == N - 1)
        ans.push_back(temp);
      continue;
    }
    if (i == (N - s) / 2 + s && (N - s) % 2 == 0) {
      ans.push_back(temp);
      break;
    }

    if (A[i] + A[N - i + s - 1] != temp)
      break;
  }

  if (N % 2 == 0) {
    bool flag = 1;
    temp = A[0] + A[N - 1];
    for (int i = 1; i < N / 2; i++) {
      if (A[i] + A[N - i - 1] != temp)
        flag = 0;
    }
    if (flag)
      ans.push_back(temp);
  }

  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
