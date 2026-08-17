#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> num(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    for (char &c : S[i]) {
      c = toupper(c);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      if (S[j] == S[i])
        num[j]++;
    }
  }

  int max = num[0];
  for (int i = 0; i < N; i++)
    if (max < num[i])
      max = num[i];
  cout << max << endl;

  return 0;
}
