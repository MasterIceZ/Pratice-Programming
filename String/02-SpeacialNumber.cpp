#include <bits/stdc++.h>
using namespace std;
char a[100];
int main (){
    int len,i,num,j,sum=0;
    for(i=0;i<5;i++){
        sum = 0;
        scanf(" %s",a);
        sscanf(a,"%d",&num);
        len = strlen(a);
        for(j=1;j<=len;j++){
            sum += pow(a[j-1]-'0',j);
        }
        if(sum == num)
            printf("Y");
        else
            printf("N");

    }
    return 0;
}
