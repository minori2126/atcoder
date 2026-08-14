#include <bits/stdc++.h>
#include <setjmp.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  long long ans = 0;
  vector<int> sub(N);
  int c = 0;
  for (int i = 0; i < N; i++) {
    int a, b;
    ans += a;
    sub[i] = b - a;
                if(i > 0 && sub[i - 1] * sub[i] <
  }
  return 0;
}
