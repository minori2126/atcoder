#include <bits/stdc++.h>
using namespace std;

long long combination(int n) {
  if (n < 2)
    return 0;
  long long result = 1;
  for (int i = 0; i < 3; i++)
    result *= (n - i);
  return result / 6;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> num(N, N - 1);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    num[a - 1]--;
    num[b - 1]--;
  }
  for (int i = 0; i < N; i++) {
    cout << combination(num[i]) << " ";
  }
  return 0;
}
