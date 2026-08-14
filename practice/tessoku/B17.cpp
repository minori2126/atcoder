#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  for (int i = 0; i < N; i++)
    cin >> h[i];

  vector<int> dp(N);
  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < N; i++)
    dp[i] =
        min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));

  int place = N - 1;
  vector<int> answer;
  while (1) {
    answer.push_back(place + 1);
    if (place == 0)
      break;

    if (dp[place - 1] + abs(h[place - 1] - h[place]) == dp[place])
      place -= 1;
    else
      place -= 2;
  }

  cout << answer.size() << endl;
  for (int i = answer.size() - 1; i >= 0; i--)
    cout << answer[i] << " ";
}
