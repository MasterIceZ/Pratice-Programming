#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[100][1010];
int cnt;
int di[]={1,-1,0,0},dj[]={0,0,-1,1};
void play(int i,int j){
	int k,ii,jj;
	a[i][j] = '.';
	cnt++;
	for(k=0;k<4;k++){
		ii = di[k] + i;
		jj = dj[k] + j;
		//check out
		if(ii<0 || jj<0 || ii>m-1 || jj>n-1){
			continue;
		}
		//check .
		if(a[ii][jj]=='.'){
			continue;
		}
		play(ii,jj);
		//cnt++;
	}
}

int main (){
	int i,j,ans=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='*'){
				cnt = 0;
				play(i,j);
				ans = max(ans,cnt);
			}
		}
	}
	printf("%d",ans);
	return 0;
}
