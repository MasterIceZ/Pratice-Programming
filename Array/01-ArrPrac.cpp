#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main (){
	int i,q,n,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&q);
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
		if(a[i]==q)
			cnt++;
	}
	printf("\n%d\n",cnt);
	return 0;
}
