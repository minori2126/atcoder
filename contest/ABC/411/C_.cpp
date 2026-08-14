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
  int count=0;
  for(int i=0;i<Q;i++){
    M.at(A.at(i)-1)=!M.at(A.at(i)-1);
    if(M.at(A.at(i)-1)){
      if(A.at(i)-2==0&&!M.at(A.at(i))){
        count++;
      }else if(A.at(i)==N&&!M.at(A.at(i))){
        count++;
      }else if(!M.at(A.at(i))-2&&!M.at(A.at(i))){
        count++;
      }
    }else{
      if(A.at(i)-2==0&&!M.at(A.at(i))){
        count--;
      }else if(A.at(i)==N&&!M.at(A.at(i)-2)){
        count--;
      }else if(!M.at(A.at(i))-2&&!M.at(A.at(i))){
        count--;
      }
    }
    cout << count << endl;
  }
  return 0;
}


