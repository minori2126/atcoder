#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0, N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  for (int i = 0; i < 30; i++) {
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 == 0)
        A[i] /= 2;
      else {
        cout << ans << endl;
        return 0;
      }
    }
    ans++;
  }

  cout << ans << endl;
  return 0;
}
