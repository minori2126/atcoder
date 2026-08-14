#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> num(N), sum(1000000);
  int bottom = 0;
  while (Q--) {
    int a, x;
    cin >> a >> x;
    if (a == 1) {
      num[x - 1]++;
      sum[num[x - 1]]++;
      if (sum[num[x - 1]] == N)
        bottom = num[x - 1];
    } else {
      cout << sum[x + bottom] << endl;
    }
  }

  return 0;
}
