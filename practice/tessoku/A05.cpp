#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, count = 0;
  cin >> N >> K;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      int k = K - i - j;
      if (k >= 1 && k <= N)
        count++;
    }
  }
  cout << count << endl;
}
