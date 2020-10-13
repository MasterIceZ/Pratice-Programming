#include<bits/stdc++.h>
using namespace std;
int ans[100010];
void pluss(string a,string b){
	if(a=="0"){
		cout << b << endl;
		return ;
	}
	else if(b=="0"){
		cout << a << endl;
		return ;
	}
	int tod=0,i,j,pos=0;
	for(i=a.size()-1,j=b.size()-1,tod=0,pos=0;i>=0&&j>=0;--i,--j,++pos){
		ans[pos]=a[i]-'0'+b[j]-'0'+tod;
		if(ans[pos]>=10){
			tod=1;
		}
		else{
			tod=0;
		}
		ans[pos]%=10;
	}	
	for(;i>=0;--i,++pos){
		ans[pos]=a[i]-'0'+tod;
		if(ans[pos]>=10){
			tod=1;
		}
		else{
			tod=0;
		}
		ans[pos]%=10;
	}
	for(;j>=0;--j,++pos){
		ans[pos]=b[j]-'0'+tod;
		if(ans[pos]>=10){
			tod=1;
		}
		else{
			tod=0;
		}
		ans[pos]%=10;
	}
	ans[pos]=tod;
	++pos;
	for(;pos>=0&&ans[pos]==0;--pos);
	for(;pos>=0;--pos){
		cout << ans[pos];
	}
	cout << '\n';
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
	cin >> a;
	cin >> b;
	pluss(a,b);
	return 0;
}
