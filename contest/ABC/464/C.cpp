#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  multiset<tuple<int, int, int>> B;
  vector<int> color(N);
  for (int i = 0; i < N; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    c--;
    color[a]++;
    B.insert({b, a, c});
  }
  int count = 0;
  for (int i = 0; i < N; i++) {
    if (color[i])
      count++;
  }

  auto [day, f, s] = *B.begin();
  int next = day;
  for (int i = 0; i < M; i++) {
    if (i == next) {
      while (!B.empty() && get<0>(*B.begin()) == next) {
        auto [day, f, s] = *B.begin();
        B.erase(B.begin());
        color[f]--;
        if (color[f] == 0)
          count--;
        color[s]++;
        if (color[s] == 1)
          count++;
      }
      next = get<0>(*B.begin());
    }
    cout << count << endl;
  }

  return 0;
}
