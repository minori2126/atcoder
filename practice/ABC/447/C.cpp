#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  string s = S, t = T;
  erase(s, 'A');
  erase(t, 'A');

  if (s != t) {
    cout << "-1" << endl;
    return 0;
  }

  int ans = 0, i = 0;
  while (1) {
    if (S.size() == i && T.size() == i) {
      break;
    } else if (S.size() == i) {
      S += "A";
      ans++;
      i++;
      continue;
    } else if (T.size() == i) {
      T += "A";
      ans++;
      i++;
      continue;
    }

    if (S[i] != T[i]) {
      ans++;
      if (S[i] == 'A')
        T.insert(i, 1, 'A');
      else
        S.insert(i, 1, 'A');
    }
    i++;
  }

  cout << ans << endl;
  return 0;
}
