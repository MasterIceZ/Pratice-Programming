#include<bits/stdc++.h>
using namespace std;
const int mod = 1e6;
int dp[1010][1010];
int main () {
    int col,row,q,colq,rowq;
    scanf("%d %d %d",&col,&row,&q);
    while(q--){
        scanf("%d %d",&colq,&rowq);
        colq+=1,rowq+=1;
        dp[rowq][colq]=-1;
    }
    int i,j;
    dp[1][1] = 1;
    col++,row++;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(dp[i][j]==-1)
                dp[i][j] = 0;
            else{
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
                dp[i][j] %= mod ;
            }

        }
    }
    printf("%d",dp[row][col]);
    return 0;
    }
