#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, B;
  cin >> W >> B;

  W *= 1000;
  int num = W / B;
  if (W >= B * num)
    num++;
  cout << num << endl;
  return 0;
}
