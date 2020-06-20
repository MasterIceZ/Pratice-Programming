#include <bits/stdc++.h>
using namespace std;

int n;

char a[101][101];

void playleft(int i,int j);

void playdown(int i,int j);
int main (){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='#'){
				playleft(i,j);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void playleft(int i,int j){
	int ii,jj;
	ii = i;
	jj = j-1;
	if(i<0||i>=n||jj<0||jj>=n)
		return ;
	if(a[i][jj]!='#'){
		a[i][j] = '.';
		playleft(i,jj);
	}
	if(a[i][jj]=='#'){
		a[i][j] = '#';
	       	return ;	
	}
}
