#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int num = (int)sqrt(N);
  vector<int> pow;
  for (int i = 1; i <= num; i++)
    pow.push_back(i * i);
  vector<int> count(N + 1);
  for (int i = 0; i < pow.size(); i++) {
    for (int j = i + 1; j < pow.size(); j++) {
      if (pow[i] + pow[j] > N)
        break;
      count[pow[i] + pow[j]]++;
    }
  }
  vector<int> ans;
  for (int i = 1; i <= N + 1; i++) {
    if (count[i] == 1)
      ans.push_back(i);
  }
  cout << ans.size() << endl;
  for (int n : ans) {
    cout << n << " ";
  }
  cout << endl;
}
