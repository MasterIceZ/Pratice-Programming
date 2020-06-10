#include<bits/stdc++.h>
using namespace std;
int row,col;
char a[1000][1000];
int di[]={-1,1,0,0};
int dj[]={0,0,-1,1};

void play(int i,int j);

int main (){
	int i,j,cnt=0;
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
			play(i,j);
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

void play (int i,int j){
	int ii,jj,k;
	a[i][j]='.';
	for(k=0;k<4;k++){
		ii = di[k]+i;
		jj = dj[k]+j;
		ii+=row;
		jj+=col;
		ii%=row;
		jj%=col;
		if(a[ii][jj]!='*')
			continue;
		play(ii,jj);
	}

}
