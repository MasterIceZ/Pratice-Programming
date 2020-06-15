///Board 1 Node
///เท่ากับเห็น??
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main ()
{
    int n,h,cnt=0,i,num;
    scanf("%d %d",&n,&h);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[i] = num + h*i;
    }
    for(i=1;i<=n;i++){
        if(a[i]<a[i-1]){
            cnt++;
        }
        a[i] = max(a[i],a[i-1]);
    }
    printf("%d",cnt);
    return 0;
}

/**
test case :

5 2
2 3 1 2 4
4 7 7 10 14
ans : 1

*/
