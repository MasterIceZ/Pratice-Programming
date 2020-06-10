#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main () {
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    int want,ans;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(m--){
        scanf("%d",&want);
        ans = lower_bound(a,a+n,want)-a;
        printf("%d\n",ans);
    }
    return 0;
    }
