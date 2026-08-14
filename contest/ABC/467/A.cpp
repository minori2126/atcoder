#include <bits/stdc++.h>
using namespace std;

int main() {
  float H, W;
  cin >> H >> W;
  H /= 100;
  float BMI = W / H / H;
  if (BMI < 25.0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}
