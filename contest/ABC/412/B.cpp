#include<bits/stdc++.h>
using namespace std;

string S,T;
int c(char s){
  for(int i=0;i<T.size();i++){
    if(T[i]==s)return 1;
  }
  return 0;
}

int main(){
  cin >> S >> T;
  bool a=true;
  for(int i=1;i<S.size();i++){
    if(isupper(S[i])){
		    if(!c(S[i-1]))a=false;
	    	    }
  }
  if(a)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
