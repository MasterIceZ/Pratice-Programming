#include<bits/stdc++.h>
using namespace std;
int a[280];
int main () {
    int i,j,q,l,r,h;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        scanf("%d %d %d",&l,&h,&r);
        for(j=l;j<r;j++){
            if(a[j]<h)
                a[j] = h;
        }
    }
    int printed = 0;
    for(i=1;i<=280;++i){
        if(a[i]!=printed){
            printf("%d %d ",i,a[i]);
            printed = a[i];
        }
    }
    return 0;
    }
/**
8
1 11 5
2 6 7
12 7 16
14 3 25
19 18 22
3 13 9
23 13 29
24 4 28

2
1 11 5
2 6 7
*/
