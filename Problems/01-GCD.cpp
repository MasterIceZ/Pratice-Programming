#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a%b==0)
        return b;
    return gcd(b,a%b);
    }

int main () {
    int n,m,ans=0;
    int q;
    scanf("%d",&q);
    while(q--) {
        scanf("%d",&n);
        ans = gcd(ans,n);
        }
    printf("%d",ans);
    return 0;
    }
