#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string s;
  cin >> N >> s;

  vector<int> S(2 * N), A(2 * N), B(2 * N);
  for (int i = 0; i < 2 * N; i++) {
    if (s[i] == 'A')
      S[i] = 1;
  }
