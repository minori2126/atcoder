#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, Af, Bf;
  cin >> N >> M >> Af >> Bf;
  vector<int> A(N), B(N);
  int AB = 1, notA = 0, notB = 0;
  for (int i = 0; i < M - 1; i++) {
    int a, b;
    cin >> a >> b;
    if (!((Af == a && Bf == b) || (Af == b && Bf == a)))
      AB = 0;
    if (Af != a && Af != b) {
      notA++;
      A[b - 1]++;
      A[a - 1]++;
    }
    if (Bf != a && Bf != b) {
      notB++;
      B[a - 1]++;
      B[b - 1]++;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == notA)
      ans++;
    if (B[i] == notB)
      ans++;
  }
  cout << ans - AB << endl;

  return 0;
}
