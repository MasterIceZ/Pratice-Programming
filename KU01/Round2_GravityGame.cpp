#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int b[101];
int main (){
	int n,i,j;
	char g;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		memset(b,0,n);
		for(j=0;j<n;j++){
			scanf(" %c",&g);
			if(g=='.')
				a[i][j] = 1;
			else
				a[i][j] = 0;
			b[j] = a[i][j];
		}
		sort(b,b+n);
		for(int k=0;k<n;k++){
			a[i][k] = b[k];
		}
	}
	for(j=0;j<n;j++){
        memset(b,0,n);
        for(i=0;i<n;i++){
            b[i] = a[i][j];
        }
        sort(b,b+n,greater<int>());
        for(int k=0;k<n;k++){
            a[k][j] = b[k];
        }
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==1)
				printf(".");
			else
				printf("#");
		}
		printf("\n");
	}

}
