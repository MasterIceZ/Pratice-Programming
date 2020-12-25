#include <bits/stdc++.h>
using namespace std;
const int N = 3101;
int a[N];
int ans[N];
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int w,h,n,x,y;
	cin >> w >> h >> n ;
	while(n--){
		cin >> x >> y;
		y += x ;
		while(x < y){
			a[x]++;
			x++;
		}
	}
	while(w--){
		ans[a[w]]++;
	}
	ans[0] *= h;
	ans[1] *= h;
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}
