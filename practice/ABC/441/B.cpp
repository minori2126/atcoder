#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;
  set<char> taka, ao;
  for (int i = 0; i < S.size(); i++)
    taka.insert(S[i]);
  for (int i = 0; i < T.size(); i++)
    ao.insert(T[i]);

  int Q;
  cin >> Q;
  while (Q--) {
    string w;
    cin >> w;
    bool t = 1, a = 1;
    for (int i = 0; i < w.size(); i++)
      if (taka.find(w[i]) == taka.end())
        t = 0;
    for (int i = 0; i < w.size(); i++)
      if (ao.find(w[i]) == ao.end())
        a = 0;
    if (t && !a)
      cout << "Takahashi" << endl;
    else if (a && !t)
      cout << "Aoki" << endl;
    else
      cout << "Unknown" << endl;
  }
  return 0;
}
