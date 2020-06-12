#include<bits/stdc++.h>
using namespace std;
int mine[100100];
int main () {
    /**
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
    */
    int n,q,l,r;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf("%d %d",&l,&r);
        mine[l]++;
        mine[r+1]--;
    }
    for(int i=1;i<=n;i++){
        mine[i] += mine[i-1] ;
    }
    int index;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&index);
        printf("%d\n",mine[index]);
    }
    return 0;
    }
