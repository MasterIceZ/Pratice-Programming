#include<bits/stdc++.h>
using namespace std;
int a[1001],x[1001];
int main (){
	int i,k,money,n,walk;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int now = 0;
	for(i=0;i<n;i++){
		scanf("%d",&walk);
		while(walk>0){
			if(a[now]!=-1)
				walk--;
			now++;
			now%=n;
		}
		while(a[now]==-1){
			now++;
			now%=n;
		}
		money = a[now];
		x[i%k] += money;
		a[now]=-1;
		
	}
	for(i=0;i<k;i++){
		printf("%d ",x[i]);
	}
	return 0;
}
