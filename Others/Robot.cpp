#include <bits/stdc++.h>
using namespace std;
int a[110];
int main (){
	int n,h,i;
	scanf("%d %d",&n,&h);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int index = lower_bound(a,a+n,h)-a;
	printf("%d",a[index]);
	return 0;
}
/**
 *	Bianry Search
 * */
