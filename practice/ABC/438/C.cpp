#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> stack;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (!stack.empty() && stack.back().first == a) {
      stack.back().second++;

      if (stack.back().second == 4)
        stack.pop_back();
    } else
      stack.push_back({a, 1});
  }

  int ans = 0;
  for (int i = 0; i < stack.size(); i++)
    ans += stack[i].second;

  cout << ans << endl;

  return 0;
}
