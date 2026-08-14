#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n >> x;
	vector<int> A(n);
	int left=0,right=n-1;
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A.begin(),A.end());
	int ans=-1;
	while(left<=right){
		int k=(left+right)/2;
		if(A[k]>x)right=k-1;
		else if(A[k]<x)left=k+1;
		else {
			ans=k;
			break;
		}
	}
	if(ans!=-1)cout << "Yes" << endl;
	else cout << "No" << endl;
}


