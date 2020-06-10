#include<bits/stdc++.h>
using namespace std;
int n;
int a[30][30];
int di[]={-1,1,0,0};
int dj[]={0,0,-1,1};
int mx=-302;

void play(int i,int j){
	int k,ii,jj;
	mx = max(mx,a[i][j]);
	for(k=0;k<4;k++){
		ii = di[k] +i;
		jj = dj[k] +j;
		if(ii>=n||jj>=n||ii<0||jj<0)
			continue ;
		if(a[ii][jj]==100)
			continue ;
		/*if(a[ii][jj]>mx)
			mx = a[ii][jj];*/
		if(a[ii][jj]<=a[i][j])
			continue ;
		play(ii,jj);
	}
}

int main (){
	int i,j,sti,stj;
	scanf("%d",&n);
	scanf("%d %d",&stj,&sti);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	play(sti-1,stj-1);
	printf("%d",mx);
	return 0;

}
