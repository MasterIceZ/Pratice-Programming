#include<bits/stdc++.h>
using namespace std;

struct sack{
	int val, w;
	bool operator < (const sack& o) const{
		return w < o.w;
	}
};

int knapsack(int MxN, vector<sack>bag, int n){
	if(n==0||MxN==0){
		return 0;
	}
	if(bag[n-1].w > MxN){
		knapsack(MxN, bag, n-1);
	}
	else{
		return max(bag[n-1].val+knapsack(MxN-bag[n-1].w,bag,n-1), knapsack(MxN, bag, n-1));
	}
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int MxW, n;
	cin >> n;
	vector<sack>bag(n);
	for(int i=0;i<n;++i){
		cin >> bag[i].val >> bag[i].w;
	}
	
	sort(bag.begin(), bag.end());
	
	cin >> MxW;
	
	int ans = knapsack(MxW, bag, n);
	cout << "ANS : " << ans << endl;
	return 0;
}
