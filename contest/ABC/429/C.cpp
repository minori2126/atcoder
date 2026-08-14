#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  map<long long, long long> count;
  for (int i = 0; i < N; i++) {
    count[A[i]]++;
  }

  sort(A.begin(), A.end());
  A.erase(unique(A.begin(), A.end()), A.end());

  long long answer = 0;

  for (int i = 0; i < A.size(); i++) {
    if (count[A[i]] > 1) {
      answer += count[A[i]] * (count[A[i]] - 1) / 2 * (N - count[A[i]]);
    }
  }
  cout << answer << endl;
  return 0;
}
