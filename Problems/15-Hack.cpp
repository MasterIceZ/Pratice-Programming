#include<bits/stdc++.h>
using namespace std;
string key[10100];
char ans[100];
int main () {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int i;
    for(i=0;i<n;i++){
        scanf(" %s",ans);
        key[i] = ans ;
    }

    sort(key,key+n);
    while(m--){
        scanf(" %s",ans);
        i = lower_bound(key,key+n,ans)-key;
        if(key[i]==ans)
            printf("Accepted\n");
        else
            printf("Rejected\n");
    }
    return 0;
    }
