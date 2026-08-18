#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0, left = 0;
  for (int i = 0; i < N; i++) {
    int right = left + 1;
    for (int j = left; j < right && j < N; j++) {
      ans++;
      if (S[j] == 'o')
        right++;
    }
    /*if (ans > N)
      cout << N << endl;
    else*/
    cout << ans << endl;
    left = right;
  }
  return 0;
}
