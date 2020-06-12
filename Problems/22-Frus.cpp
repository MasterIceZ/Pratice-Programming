#include<bits/stdc++.h>
using namespace std;
int qs[100100];
int main () {
    int n,q;
    scanf("%d",&n);
    int num,i;
    for(i=1; i<=n; i++) {
        scanf("%d",&qs[i]);
        qs[i] = qs[i] + qs[i-1];
        }
    int l,r,ans;
    scanf("%d",&q);
    while(q--) {
        scanf("%d %d",&l,&r);
        ans = qs[r] - qs[l-1];
        printf("%d",ans);
        printf("\n");
            }
    return 0;
    }
/**
5
2 5 1 7 3
2
1 3
2 5
*/
