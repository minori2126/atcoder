#include <bits/stdc++.h>
using namespace std;

const vector<string> str = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string s;
  cin >> s;

  while (!s.empty()) {
    bool found = false;
    for (string w : str) {
      if (s.size() >= w.size() && s.substr(s.size() - w.size()) == w) {
        s.erase(s.size() - w.size());
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
