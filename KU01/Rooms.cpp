#include<bits/stdc++.h>
using namespace std;
int mark[33][33];
const int di[]={-1,0,0,1},dj[]={0,-1,1,0};
int n,m,check=0,cnt=0;
char a[33][33];
void play(int i,int j);
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(a[i][j]=='A'){
				play(i,j);
			}
			if(a[i][j]=='W'&&check){
				play(i,j);
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
void play(int i,int j){
	mark[i][j]=1;
	for(int k=0;k<4;++k){
		int ii=i+di[k];
		int jj=j+dj[k];
		if(mark[ii][jj]||ii<1||jj<1||ii>n||jj>m||a[ii][jj]=='#'){
			continue;
		}
		if(a[ii][jj]=='*'){
			cnt++;
		}
		if(a[ii][jj]=='W'){
			check=1;
		}
		play(ii,jj);
	}	
}
