#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  map<int, long long> num;
  multiset<long long> product;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    auto it = num.find(n);
    if (it != num.end())
      num[n]++;
    else
      num[n] = 1;
  }

  for (auto p : num) {
    product.insert((long long)p.first * p.second);
  }

  for (int i = 0; i < K; i++) {
    if (product.size() == 0) {
      cout << 0 << endl;
      return 0;
    }
    product.erase(prev(product.end()));
  }

  long long ans = 0;
  for (long long i : product)
    ans += i;
  cout << ans;

  return 0;
}
