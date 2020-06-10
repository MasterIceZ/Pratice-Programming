#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[500100];
int main () {
    ll n , i, sum=0 ;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr+1,arr+n+1);
    for(i=1;i<=n;i++){
        sum += arr[i]*2;
        sum += arr[i] - arr[i-1] ;
    }
    sum += n;
    sum += arr[n];
    printf("%lld",sum);
    return 0;
    }
