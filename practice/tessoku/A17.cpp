#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 1; i < N; i++)
    cin >> A[i];
  for (int i = 2; i < N; i++)
    cin >> B[i];
  vector<int> dp(N);
  dp[1] = A[1];
  for (int i = 2; i < N; i++)
    dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);

  int place = N;
  vector<int> answer;
  while (1) {
    answer.push_back(place);
    if (place == 1)
      break;
    if (dp[place - 2] + A[place - 1] == dp[place - 1])
      place -= 1;
    else
      place -= 2;
  }
  cout << answer.size() << endl;
  for (int i = answer.size() - 1; i >= 0; i--)
    cout << answer[i] << " ";
}
