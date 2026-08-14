#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N.size(); i++) {
    if (N[i] == '1')
      ans += (1 << N.size() - 1 - i);
  }
  cout << ans << endl;
}
