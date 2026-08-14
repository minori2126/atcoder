#include <bits/stdc++.h>
#include <setjmp.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> R(M), C(M);
  multiset<int> R_m, C_m;
  for (int i = 0; i < M; i++) {
    cin >> R[i] >> C[i];
    R_m.insert(R[i]);
    C_m.insert(C[i]);
  }

  int ans = 0;
  for (int i = 0; i < M; i++) {
    auto it = R_m.find(R[i]);
    if (it != R_m.end())
      R_m.erase(it);
    it = C_m.find(C[i]);
    if (it != C_m.end())
      C_m.erase(it);
    if (R_m.find(R[i]) == R_m.end() && C_m.find(C[i]) == C_m.end()) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
