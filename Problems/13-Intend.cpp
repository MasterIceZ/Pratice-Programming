#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main () {
    int t,n,q,k;
    scanf("%d %d",&n,&q);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int cnt;
    while(q--){
        cnt = 0;
        scanf("%d",&k);
        t = upper_bound(a,a+n,k)-a;
        //t--;
        printf("%d\n",t);
    }
    return 0;
    }
