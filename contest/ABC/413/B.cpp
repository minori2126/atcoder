#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}

	set<string> a;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(j==i)continue;
				a.insert(S[i]+S[j]);
		}
	}

	cout << a.size();	
	return 0;
}
