#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  set<int> A;
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    A.insert(num % K);
  }

  int ans = *A.rbegin() - *A.begin();
  for (int i = 0; i < N; i++) {
    A.insert(*A.begin() + K);
    A.erase(A.begin());
    ans = min(ans, *A.rbegin() - *A.begin());
  }

  cout << ans;

  return 0;
}
