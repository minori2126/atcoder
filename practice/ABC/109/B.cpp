#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  for (int i = 0; i < N; i++) {
    cin >> W[i];
  }

  set<string> used;

  used.insert(W[0]);
  for (int i = 1; i < N; i++) {
    if (W[i - 1].back() != W[i].front()) {
      cout << "No" << endl;
      return 0;
    }

    if (used.count(W[i])) {
      cout << "No" << endl;
      return 0;
    }
    used.insert(W[i]);
  }

  cout << "Yes" << endl;
  return 0;
}
