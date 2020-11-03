#include<bits/stdc++.h>
using namespace std;
struct A{
	int path[110];
	int minimum = -1e9;	
};
A a[110];
int ans = 1e9;
int main (){
	int n,l;
	scanf("%d %d",&n,&l);
	int i,j,run;
	for(i=1;i<=n;i++){
		for(j=1;j<=l;j++){
			scanf("%d",&a[i].path[j]);
			if(j!=0){
				run = a[i].path[j] - a[i].path[j-1];
				a[i].minimum	= max(run,a[i].minimum);
			}
		}
		if(i!=0){
			ans = min(a[i].minimum,ans);
		}
	}
	printf("%d",ans);
	return 0;
}
