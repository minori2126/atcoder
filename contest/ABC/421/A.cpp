#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s[i];
  }
  int X;
  string Y;
  cin >> X >> Y;

  if (s[X - 1] == Y)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
