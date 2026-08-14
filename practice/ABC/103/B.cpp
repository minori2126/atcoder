#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if ((s + s).find(t) != string::npos)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
