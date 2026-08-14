#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> max(M, -1);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    if (max[a - 1] < b)
      max[a - 1] = b;
  }
  for (int i = 0; i < M; i++)
    cout << max[i] << " ";

  return 0;
}
