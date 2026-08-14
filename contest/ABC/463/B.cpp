#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char x;
  cin >> N >> x;
  int X = x - 'A';
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    if (S[X] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
