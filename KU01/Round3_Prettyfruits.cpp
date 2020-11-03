#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,ans = 0,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);

        if(75*a >= 100*b){
            ans += 5;
        }
        else{
            ans += 3;
        }
    }
    printf("%d",ans);
    return 0;
}
