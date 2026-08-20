#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> powers;
  long long p = 1;
  while (p <= 1000000000LL) {
    powers.push_back(to_string(p));
    p *= 2;
  }

  set<long long> good_numbers;
  queue<string> q;

  for (const string &s : powers) {
    long long val = stoll(s);
    if (val <= 1000000000LL) {
      good_numbers.insert(val);
      q.push(s);
    }
  }

  while (!q.empty()) {
    string cur = q.front();
    q.pop();

    for (const string &p_str : powers) {
      string nxt_str = cur + p_str;

      if (nxt_str.length() > 10)
        continue;

      long long nxt_val = stoll(nxt_str);

      if (nxt_val <= 1000000000LL) {
        if (good_numbers.find(nxt_val) == good_numbers.end()) {
          good_numbers.insert(nxt_val);
          q.push(nxt_str);
        }
      }
    }
  }

  vector<long long> ans(good_numbers.begin(), good_numbers.end());

  cout << ans[N - 1] << endl;
  return 0;
}
