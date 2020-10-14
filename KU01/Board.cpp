#include<bits/stdc++.h>
using namespace std;
int a[30][30];
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,s;
	cin >> n >> m >> s;
	int mp = n*m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> a[i][j];
			a[i][j] += s*i;
		}
	}
	int cnt=0;
	for(int j=0;j<m;++j){
		for(int i=1;i<n;++i){
			if(a[i][j]<=a[i-1][j]){
				cnt++;
			}
			a[i][j] = max(a[i][j],a[i-1][j]);
		}
	}
	cout << mp-cnt << endl;
	return 0;
}
