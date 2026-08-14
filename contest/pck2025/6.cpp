#include <bits/stdc++.h>
using namespace std;

long long check(vector<long long> a, vector<long long> b) {
  int N = a.size();
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    // sum += min(1, max(0, b[i] - a[i]));
    if (b[i] - a[i] >= 0)
      sum++;
  }
  return sum;
}

int calc(int N) {
  int ans = 0;
  while (N > 0) {
    N /= 10;
    ans++;
  }
  return ans;
}

long long kaijou(int N) {
  if (N == 1)
    return 1;
  else
    return N * kaijou(N - 1);
}

vector<long long> swap(vector<long long> b, int x, int y) {
  long long temp = b[x];
  vector<long long> B = b;
  B[x] = B[y];
  B[y] = temp;
  return B;
}

int main() {
  int N;
  cin >> N;
  vector<long long> a(N), b(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];
  for (int i = 0; i < N; i++)
    cin >> b[i];

  vector<long long> ans;

  /*for (long long i = 0; i < (1 << N); i++) {
    vector<long long> B(N);
    B = b;
    for (int j = 0; j < N; j++) {
      int y = j - 1;
      if (j == 0)
        y += N;
      if ((1 << j) & i)
        B = swap(B, j, y);
    }
    ans.push_back(check(a, B));
  }*/
  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  cout << ans.size() << endl;
  for (long long i = 0; i < ans.size(); i++) {
    cout << ans[i];
    if (i != ans.size() - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
