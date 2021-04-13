// Floyd Warshall
#include<bits/stdc++.h>
using namespace std;

int dp[222][222];

int32_t main (){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	memset(dp, 1e9, sizeof dp);
	for(int i=1; i<=222; ++i){
		dp[i][i] = 0;
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin >> dp[i][j];
		}
	}
	for(int k=1; k<=n; ++k){
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j){
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
	int st, ed;
	cin >> st >> ed;
	cout << dp[st][ed];
	return 0;
}
