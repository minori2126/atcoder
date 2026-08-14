#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  vector<int> x(N), y(M);
  for (int i = 0; i < N; i++)
    cin >> x[i];
  for (int j = 0; j < M; j++)
    cin >> y[j];

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  if (max(X, x[N - 1]) >= min(Y, y[0]))
    cout << "War" << endl;
  else
    cout << "No War" << endl;

  return 0;
}
