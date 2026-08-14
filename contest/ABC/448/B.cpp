#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, answer = 0;
  cin >> N >> M;
  vector<int> C(M + 1);
  for (int i = 1; i < M + 1; i++)
    cin >> C[i];

  while (N--) {
    int A, B;
    cin >> A >> B;
    if (C[A] > B) {
      answer += B;
      C[A] -= B;
    } else {
      answer += C[A];
      C[A] = 0;
    }
  }

  cout << answer << endl;

  return 0;
}
