#include<bits/stdc++.h>
using namespace std;
int mine[100100];
int main () {
    int n,q,i,num,l,r;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++){
            mine[i] += 1;
        }
    }
    scanf("%d",&q);
    int index;
    while(q--){
        scanf("%d",&index);
        printf("%d\n",mine[index]);
    }
    return 0;
    }
