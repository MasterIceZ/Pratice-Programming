#include<bits/stdc++.h>
using namespace std;
int32_t main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,q;
	map<int,int>posx,posy;
	cin >> n >> m >> q;
	while(q--){
		int x,y;
		cin >> x >> y;
		posx[x]=1;
		posy[y]=1;	
	}
	const int MOD = 25621;
	int ans = (((n-(int)posx.size())%MOD)*((m-(int)posy.size())%MOD))%MOD;
	cout << ans << endl;
	return 0;
}
