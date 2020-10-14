#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l,m,q;
	cin >> l >> m >> q;
	while(q--){
		int now,mark;
		now=l;
		mark=0;
		for(int i=0,opr;i<m;++i){
			cin >> opr;
			if(mark){
				continue;
			}
			if(opr==1){
				now++;
			}
			else{
				now--;
			}
			if(now<0||now>2*l){
				mark = 1;
			}
		}
		if(mark){
			cout << 0 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
	return 0;
}
