#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string S;
    cin >> S;
    map<char, int> num;
    for (int i = 0; i < S.size(); i++)
      num[S[i]]++;
    bool yes = 1;
    for (auto it = num.begin(); it != num.end(); ++it) {
      cout << it->second << "," << S.size() << endl;
      if (it->second * 2 > S.size() + 1)
        yes = 0;
    }
    if (yes) {
      cout << "Yes" << endl;
      multiset<pair<int, char>> a;
      for (auto it = num.begin(); it != num.end(); ++it) {
        a.insert({it->second, it->first});
      }
      pair<int, char> prev = *prev(a.end());
      a.erase(prev(a.end()));
      for (int i = 0; i < S.size(); i++)
    } else
      cout << "No" << endl;
  }
  return 0;
}
