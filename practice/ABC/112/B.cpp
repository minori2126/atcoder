#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> c(N), t(N), A;
  for (int i = 0; i < N; i++)
    cin >> c[i] >> t[i];
  for (int i = 0; i < N; i++) {
    if (t[i] <= T)
      A.push_back(c[i]);
  }
  if (A.size() > 0) {
    int min = *min_element(A.begin(), A.end());
    cout << min << endl;
  } else {
    cout << "TLE" << endl;
  }

  return 0;
}
