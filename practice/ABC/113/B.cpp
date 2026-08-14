#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  float ans = (1 << 30);
  int index = (1 << 30);
  for (int i = 0; i < N; i++) {
    int H;
    cin >> H;
    if (abs(A - ans) > abs(A - (T - H * 0.006))) {
      ans = T - H * 0.006;
      index = i;
    }
  }

  cout << index + 1 << endl;
  return 0;
}
