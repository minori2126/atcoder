#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n)
	{
		if(n == 0)break;
		multiset<pair<int,int>> S;
		set<pair<int,int>> has;
		pair<int,int> del = {0,-1};
		int gem = 0;	
		for(int i = 0; i < n; i++){
			int a,b;
			cin >> a >> b;
			S.insert({a,b});
			if(b > 0)has.insert({a,b});
			gem+=b;
		}

		int right = n - gem;

		if(has.size()){
			del = {(*has.begin()).first,(*has.begin()).second};
			right--;
		}

		auto it = S.begin();

		long long ans = del.first;
		for(int i = 0; i < right; i++)
		{
			if((*it).first == del.first && (*it).second == del.second){
				del = {-1,-1};
				right++;
				it++;
				continue;
			}
			ans+=(*it).first;
			cout << (*it).first << " " << (*it).second << endl;
			it++;
		}
		cout << ans << endl;
	}

	return 0;
}	
