#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    string W;
    cin >> N >> W;
    vector<long long> X(N), Y(N - 1);
    for (int i = 0; i < N; i++)
      cin >> X[i];
    for (int i = 0; i < N - 1; i++)
      cin >> Y[i];

    vector<long long> S(N), R(N);
    S[0] = (W[0] == 'S' ? 0 : -X[0]);
    R[0] = (W[0] == 'R' ? 0 : -X[0]);

    for (int i = 1; i < N; i++) {
      S[i] = max(R[i - 1] + Y[i - 1] + (W[i] == 'R' ? -X[i] : 0),
                 S[i - 1] + (W[i] == 'R' ? -X[i] : 0));
      R[i] = max(R[i - 1] + (W[i] == 'S' ? -X[i] : 0),
                 S[i - 1] + (W[i] == 'S' ? -X[i] : 0));
    }

    // cout << max(S[N - 1], R[N - 1]) << endl;
    cout << "*******  " << max(S[N - 1], R[N - 1]) << "  ********" << endl;
  }
  return 0;
}
