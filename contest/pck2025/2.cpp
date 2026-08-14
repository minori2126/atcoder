#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, C, R;
  cin >> H >> C >> R;
  if (H < C - R)
    cout << "up" << endl;
  else if (H > C + R)
    cout << "down" << endl;
  else
    cout << "side" << endl;
  return 0;
}
