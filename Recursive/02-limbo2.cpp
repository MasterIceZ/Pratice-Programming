#include<bits/stdc++.h>
using namespace std;
int row,col,cnt;
char a[1000][1000];
int di[]={-1,-1,-1,0,0,1,1,1};
int dj[]={-1,0,1,-1,1,-1,0,1};

void play(int i,int j);

int main (){
	int i ,j,ans=1e9;
	scanf("%d %d",&col,&row);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]!='*')
				continue;
			cnt=0;
			play(i,j);
			ans = min(ans,cnt);
		}
	}
	printf("%d",ans);
	return 0;
}

void play (int i,int j){
	int ii,jj,k;
	a[i][j] = '.';
	cnt++;
	for(k=0;k<8;k++){
		ii = di[k] + i;
		jj = dj[k] + j;
		if(ii<0||ii>row-1||jj<0||jj>col-1)
			continue;
		if(a[ii][jj]!='*')
			continue;
		play(ii,jj);
	}
}
