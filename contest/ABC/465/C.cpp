#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  vector<int> ans(N);
  int left = 0, right = N - 1;
  int c = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'o')
      c++;
    if (c % 2 == 0) {
      ans[right] = i + 1;
      right--;
    } else {
      ans[left] = i + 1;
      left++;
    }
  }
  for (int i = 0; i < N; i++)
    cout << ans[i] << " ";
  cout << endl;

  return 0;
}
