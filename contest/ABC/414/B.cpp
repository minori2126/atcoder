#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	string S="";
	cin >> N;

	while(N--){
		 char c;
		 int l;
		 cin >> c >> l;
		 if(S.size()+l>100){
			 cout << "Too Long";
			 return 0;
		 }
		 while(l--){
			 S.push_back(c);
		 }
	}
	cout << S;



	return 0;
}
