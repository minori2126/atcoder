#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> num(2 * 100001);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    num[a - 1]++;
  }

  int prev = 0;
  for (int i = num.size() - 1; i >= 0; i--) {
    num[i] += prev;
    prev = num[i];
  }

  for (int i = 0; i < num.size() - 1; i++) {
    num[i + 1] += num[i] / 10;
    num[i] = num[i] % 10;
  }

  bool flag = 0;
  for (int i = num.size() - 1; i >= 0; i--) {
    if (num[i] != 0)
      flag = 1;
    if (flag)
      cout << num[i];
  }

  cout << endl;
  return 0;
}
