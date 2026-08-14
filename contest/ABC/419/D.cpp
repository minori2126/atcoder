#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  string S, T;
  cin >> S >> T;

  while (M--) {
    int L, R;
    cin >> L >> R;
    string temp = "";
    for (int i = 0; i < R - L + 1; i++) {
      temp += S[i + L - 1];
      S[i + L - 1] = T[i + L - 1];
    }
    for (int i = 0; i < R - L + 1; i++) {
      T[i + L - 1] = temp[i];
    }
  }
  cout << S << endl;
  return 0;
}
