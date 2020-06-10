#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100100];
ll b[100100];
int main () {
    ll q,n,i,cnt,check;
    scanf("%lld",&q);
    while(q--){
        check = 0;
        cnt = 0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                cnt++;
                i++;
            }
            else{
                b[check] = a[i];
                check++;
            }
        }
        printf("%lld\n",cnt);
        if(check==0)
            printf("Empty");
        else{
            sort(b,b+check);
            for(i=0;i<check;i++){
                printf("%lld ",b[i]);
            }
            printf("\n");
        }

    }
    return 0;
    }
/**

2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
4
1 8 8 1

*/
