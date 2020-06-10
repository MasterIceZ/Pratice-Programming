#include<bits/stdc++.h>
using namespace std;
int r,c,cnt;
char a[1000][1000];
int di[]={-1,1,0,0},dj[]={0,0,-1,1} ;
void play(int i,int j);
int main (){
	int i,j;
	scanf("%d %d",&c,&r);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	int ans=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]!='.'){
				cnt = 0;
				play(i,j);
				ans = max(ans,cnt);
			}
		}
	}
	printf("%d",ans);
	return 0;
}

void play(int i,int j){
	int ii,jj,k;
	a[i][j]='.';
	cnt++;
	for(k=0;k<4;k++){
		ii = di[k] + i;
		jj = dj[k] + j;
		if(ii<0||ii>r-1||jj<0||jj>c-1)
			continue;
		if(a[ii][jj]!='*')
			continue;
		play(ii,jj);
	}
}
