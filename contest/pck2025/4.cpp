#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N), ans;
  for (int i = 0; i < N; i++)
    cin >> x[i] >> y[i];
  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = 0; j < N; j++) {
      if (j != i && x[i] - x[j] >= y[i] - y[j])
        sum++;
    }
    if (sum == N - 1)
      ans.push_back(i);
  }

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] + 1 << endl;
  return 0;
}
