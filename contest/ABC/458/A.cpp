#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int N;
  cin >> S >> N;
  for (int i = N; i < S.size() - N; i++)
    cout << S[i];
  return 0;
}
