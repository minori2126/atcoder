#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	vector<int> a(N),b(M);
	for(int i=0;i<N;i++){
		cin >> a[i];
	}
	for(int i=0;i<M;i++){
		cin >> b[i];
	}

	int ans=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(a[i]>b[j])
			ans+=(a[i]+b[j])*a[i];
			else
				ans+=(a[i]+b[j])*b[j];
		}
	}
	cout << ans;
	return 0;
}
