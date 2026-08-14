#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> isPrime(N + 1, 1);
  for (int i = 2; i <= sqrt(N); i++) {
    if (!isPrime[i])
      continue;
    else {
      for (int j = i * 2; j <= N; j += i)
        isPrime[j] = 0;
    }
  }

  for (int i = 2; i <= N; i++)
    if (isPrime[i])
      cout << i << endl;
}
