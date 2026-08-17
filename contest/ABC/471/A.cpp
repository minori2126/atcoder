#include <bits/stdc++.h>
using namespace std;

int main() {
  float A, B;
  cin >> A >> B;
  if (A + B == 9) {
    cout << "Nine" << endl;
    return 0;
  }
  if (A - B == 9) {
    cout << "Nine" << endl;
    return 0;
  }
  if (A * B == 9) {
    cout << "Nine" << endl;
    return 0;
  }
  if (A / B == 9) {
    cout << "Nine" << endl;
    return 0;
  }
  cout << "Nein" << endl;
  return 0;
}
