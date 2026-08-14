#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,L,R,count=0;
	cin >> N >> L >> R;
	while(N--){
		int x,y;
		cin >> x >> y;
		if(x<=L && y>=R)count++;
	}

	cout << count << endl;
	return 0;
}
