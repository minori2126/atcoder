#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  vector<int> A;
  while (Q--) {
    int q;
    cin >> q;
    if (q == 1) {
      int x;
      cin >> x;
      A.push_back(x);
      sort(A.begin(), A.end());
    } else {
      cout << A.front() << endl;
      A.erase(A.begin());
    }
  }
  return 0;
}
