#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> count(M + 1), sum(M + 1);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    count[a]++;
    sum[a] += b;
  }

  for (int i = 1; i <= M; i++) {
    cout << (float)sum[i] / (float)count[i] << endl;
  }
  return 0;
}
