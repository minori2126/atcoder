#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> D(N);
  for(int i=1;i<N;i++){
    cin >> D.at(i);
  }
  vector<int> S(N);
  for(int i=1;i<N;i++){
    S.at(i)=S.at(i-1)+D.at(i);
  }
    
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      cout << S.at(j)-S.at(i) << " ";
    }
    cout << endl;
  }
  return 0;
}
