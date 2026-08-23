#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int now = 0;
  int i = 0;
  while (1) {
    now += (i + N);
    if (now >= K) {
      cout << i << endl;
      return 0;
    }
    i++;
  }
  return 0;
}
