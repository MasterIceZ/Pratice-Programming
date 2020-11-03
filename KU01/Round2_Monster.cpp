#include<bits/stdc++.h>
using namespace std;
int32_t main(){
  	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int v[n];
	for(int i=0;i<n;++i){
		cin >> v[i];
	}
	sort(v,v+n);
	for(int i=0;i<n;++i){
	  if(v[i]>m){
	    cout << v[i-1];
	    return 0;
	  }
	}
	cout << v[n-1];
	return 0;
}
