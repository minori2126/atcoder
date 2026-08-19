#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, ans = 0;
  cin >> N >> M;
  priority_queue<int> A, B;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.push(a);
  }
  for (int i = 0; i < M; i++) {
    int b;
    cin >> b;
    B.push(b);
  }

  while (A.size() > 0 && B.size() > 0) {
    int a = A.top();
    A.pop();
    int b = B.top();
    B.pop();

    while (2 * a < b && B.size() > 0) {
      b = B.top();
      B.pop();
    }

    if (2 * a >= b)
      ans++;
  }

  cout << ans << endl;

  return 0;
}
