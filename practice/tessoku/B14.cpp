#include <bits/stdc++.h>
using namespace std;

vector<long long> calc(vector<int> A) {
  vector<long long> result;
  for (int i = 0; i < (1 << A.size()); i++) {
    long long sum = 0;
    for (int j = 0; j < A.size(); j++) {
      if (i & (1 << j))
        sum += A[j];
    }
    result.push_back(sum);
  }
  return result;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> L1, L2;
  for (int i = 0; i < N / 2; i++)
    L1.push_back(A[i]);
  for (int i = N / 2; i < N; i++)
    L2.push_back(A[i]);

  vector<long long> sum1 = calc(L1);
  vector<long long> sum2 = calc(L2);

  sort(sum1.begin(), sum1.end());
  sort(sum2.begin(), sum2.end());

  for (int i = 0; i < sum1.size(); i++) {
    int p = lower_bound(sum2.begin(), sum2.end(), K - sum1[i]) - sum2.begin();
    if (p < sum2.size() && sum2[p] == K - sum1[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
