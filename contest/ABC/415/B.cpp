#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int m=0;
	for(int i=0;i<S.size();i++){
		if(S[i]=='#'){
			if(m){
				cout << i+1 << endl;
				m=0;
			}else{
				cout << i+1 << ",";
				m=1;
			}
		}
	}

	return 0;
}
