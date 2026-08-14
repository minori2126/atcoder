#include<bits/stdc++.h>
using namespace std;

long long binary_search(long long l, vector<int> A, long long check) {
    long long int r = A.size();
    long long mid;
    while (r - l > 1){
        mid=(l+r)/2;
        if (A[mid]>check){
            r=mid;
        }else{
            l=mid;
        }
    }
    return l;
}

int main(){
	int n;
	while(cin >> n)
	{
		if(n == 0)break;
		int d;
		cin >> d;
		vector<int> x(n);
		for(int i = 0; i < n; i++)cin >> x[i];
		int now = 0,ans = 0;
		while(now < n){
			int right = x[now] + 2*d;
			now = binary_search(0,x,right) + 1;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
