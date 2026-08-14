#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,Q;
  cin >> N >> Q;
  vector<int> A(Q);
  for(int i=0;i<Q;i++){
    cin >> A.at(i);
  }
  vector<bool> M(N);
  for(int i=0;i<Q;i++){
    M.at(A.at(i)-1)=!M.at(A.at(i)-1);
    
    int count=0,n=0;
    for(int j=0;j<N;j++){
      if(M.at(j)){
        n++;
	if(j==N-1){
	  count++;
	}
      }else if(n>0){
        count++;
        n=0;
      }
    }
    cout << count << endl;
  }
  return 0;
}

