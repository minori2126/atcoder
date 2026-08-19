#include <bits/stdc++.h>
#include <signal.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  long long ans = 0;
  for (int i = 0; i < S.size(); i++) {
    int miss = 0;
    for (int j = 0; i - j >= 0 && i + j < S.size(); j++) {
      if (S[i - j] != S[i + j])
        miss++;
      if (miss > 1)
        break;
      ans++;
    }
  }

  for (int i = 0; i < S.size() - 1; i++) {
    int miss = 0;
    for (int j = 0; i - j >= 0 && i + j + 1 < S.size(); j++) {
      if (S[i - j] != S[i + j + 1])
        miss++;
      if (miss > 1)
        break;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
