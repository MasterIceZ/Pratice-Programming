#include<bits/stdc++.h>
using namespace std;
#define ll long long
//GCD*LCM = A*B

long long gcd(ll n,ll m) {
    if(n==0)
        return n;
    if(m==0)
        return m;
    if(n%m==0)
        return m;
    return gcd(m,n%m);

    }
int main () {
    long long q,n,lcm=1;
    scanf("%lld",&q);
    scanf("%lld",&lcm);
    q--;
    while(q--) {
        scanf("%lld",&n);
        lcm = lcm * n /gcd(lcm,n);
        }
    printf("%lld",lcm);
    return 0;
    }
