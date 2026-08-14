#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  multiset<long long> tree;
  while (Q--) {
    int a;
    long long h;
    cin >> a >> h;
    if (a == 1) {
      tree.insert(h);
      cout << tree.size() << endl;
    } else {
      tree.erase(tree.begin(), tree.upper_bound(h));
      cout << tree.size() << endl;
    }
  }
  return 0;
}
