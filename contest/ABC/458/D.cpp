#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Q;
  cin >> X >> Q;
  while (Q--) {
    int A, B;
    cin >> A >> B;
    vector<int> v = {A, B, X};
    sort(v.begin(), v.end());
    X = v[1];
    cout << X << endl;
  }

  return 0;
}
