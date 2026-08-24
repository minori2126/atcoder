#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  int vol = 0, isPlay = 0;
  while (Q--) {
    int a;
    cin >> a;
    if (a == 1)
      vol++;
    else if (a == 2)
      vol = max(vol - 1, 0);
    else
      isPlay++;

    if (isPlay % 2 && vol > 2)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
