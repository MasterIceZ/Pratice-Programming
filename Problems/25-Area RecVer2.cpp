#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main () {
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=1; i<=r; i++) {
        for(j=1; j<=c; j++) {
            scanf("%d",&dp[i][j]);
            dp[i][j] += dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1];
            }
        }
    /**
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){

        }
    }
    **/
    int q,w,x,y,z,ans;
    scanf("%d",&q);
    while(q--) {
        scanf("%d %d %d %d",&w,&x,&y,&z);
        w++,x++,y++,z++;
        ans = dp[y][z] + dp[w-1][x-1] - dp[y][x-1] - dp[w-1][z];
        printf("%d\n",ans);
        }
    return 0;
    }
