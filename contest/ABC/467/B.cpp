#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  while (N--) {
    int A, B;
    string S;
    cin >> A >> B >> S;
    if (S == "keep")
      ans += B - A;
  }
  cout << ans << endl;
  return 0;
}
