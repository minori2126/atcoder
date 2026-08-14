#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,sum=0;
	cin >> N >> M;
	for(int i=0;i<N;i++){
		int n=0;
		cin >> n;
		sum+=n;
	}
	if(M>=sum){
		cout << "Yes" << endl;
	}
		else{
			cout << "No" << endl;
		}

	return 0;
}
