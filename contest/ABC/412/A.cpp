#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  for(int i=0;i<N;i++){
    cin >> a[i] >> b[i];
  }
  
  int count=0;
  for(int i=0;i<N;i++){
    if(b[i]-a[i]>0)count++;
  }
  cout << count << endl;
}
