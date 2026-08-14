#include<bits/stdc++.h>
using namespace std;

struct el{
	long c;
	long x;
};

int main(){	
	queue<el> A;
	int Q;
	cin >> Q;
	while(Q--){
		int q;
		cin >> q;
		if(q==1){
			long c,x;
			cin >> c >> x;
			A.push({c,x});
		}else if(q==2){
			long k;
			cin >> k;
			if(A.front().c>k){
				A.front().c-=k;
				cout << A.front().x*k << endl;
			}else{
				long sum=0;
				while(k>0&&A.front().c<=k){
					sum+=A.front().x*A.front().c;
					k-=A.front().c;
					A.pop();
				}
				if(k>0 && !A.empty()){
				A.front().c-=k;
				sum+=A.front().x*k;
				cout << sum << endl;
				}else{
					cout << sum << endl;
				}
				

			}
		}
	}

	return 0;
}
