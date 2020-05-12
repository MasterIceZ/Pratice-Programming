#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int i,g;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
    printf("\n");
    i=n;
    while(i>0){
        printf("%d ",i);
        i--;
    }
    printf("\n");
    i=1;
    do{
        if(i%2==0)
        printf("%d ",i);
        i++;
    }while(i<=n);
    printf("\n");
    g=n;
    if(n%2==1) g--;
    for(i=g;i>0;i-=2){
        printf("%d ",i);
    }
    printf("\n");
    i=1;
    while(i<=n){
        if(i%2==1)
            printf("%d ",i);
        i++;
    }
    printf("\n");
    i=n;
    do{
        if(i%2==1)
            printf("%d ",i);
        i--;
    }while(i>=1);
    return 0;
}
