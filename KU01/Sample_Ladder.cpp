#include<bits/stdc++.h>
using namespace std;
int32_t main(){
  	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int>table(n+1);
	for(int i=1;i<=n;++i){
		cin >> table[i];
	}
	int now,op;
	now = 0;
	for(int i=0;i<m;++i){
		cin >> op;
		now += op;
		if(now>=0 && now<=n){
			now += table[now];
		}
	}
	if(now<=0){
		cout << 0;
	}
	else if(now >=n){
		cout << n;
	}
	else{
		cout << now;
	}
	return 0;
}
