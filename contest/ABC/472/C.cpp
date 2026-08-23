#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M, K;
  cin >> N >> M >> K;
  vector<long long> A(N), check(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  long long current = 0;

  for (int i = 0; i < N; i++) {
    if (i + 1 - M > 0 && check[i - M])
      current -= A[i - M];

    if (current + A[i] <= K) {
      current += A[i];
      check[i] = 1;
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
