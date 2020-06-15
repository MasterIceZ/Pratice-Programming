#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main () {
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&dp[i][j]);
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
    int q,k,l,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&i,&j,&k,&l);
        i++,j++,k++,l++;
        ans = dp[k][l] - dp[k][j-1] - dp[i-1][l] + dp[i-1][j-1];
        printf("%d\n",ans);
    }
    return 0;
    }
/**
3 4
3 7 -2 12
0 -4 9 -3
6 3 8 -1
2
0 1 1 3
0 0 2 2
*/
