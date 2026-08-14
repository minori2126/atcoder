#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;

	cin >> S >> S;
	for(int i=0;i<S.size();i++){
		if(S[i]=='J')S[i]='O';
		else if(S[i]=='O')S[i]='I';	
		else if(S[i]=='I')S[i]='J';
	}
	cout << S;
	return 0;
}
