#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int W = 0, E = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'W')
      W++;
    else
      E++;
  }
  if (E > W)
    cout << "East" << endl;
  else
    cout << "West" << endl;
  return 0;
}
