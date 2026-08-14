#include <bits/stdc++.h>
using namespace std;

double calc(double x) { return x * x * x + x; }

int main() {
  int N;
  cin >> N;

  double L = 0, R = 100, mid;
  for (int i = 0; i < 20; i++) {
    mid = (L + R) / 2;
    double r = calc(mid);
    if (r > N)
      R = mid;
    else
      L = mid;
  }
  cout << fixed << setprecision(6) << mid << endl;
}
