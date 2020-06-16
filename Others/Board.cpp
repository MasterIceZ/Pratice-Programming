///Board
#include<bits/stdc++.h>
using namespace std;
int a[22][22];
int main ()
{
    int row,col,hight,cnt=0;
    int i,j;
    scanf("%d %d %d",&row,&col,&hight);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf("%d",&a[i][j]);
            a[i][j] += hight * i ;
        }
    }
    /*
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */
    for(j=1;j<=col;j++){
        for(i=1;i<=row;i++){
            if(a[i][j]<=a[i-1][j]){
                cnt++;
                //printf("%d %d %d\n",a[i][j],i,j);
            }
            a[i][j] = max(a[i][j],a[i-1][j]);
        }
    }
    int ans = row*col - cnt;
    printf("%d\n",ans);
    return 0;
}
/**
3 5 7
100 200 10 30 150
110 190 20 25 143
103 190 20 15 137

5 1 1
10
9
9
10
9



*/
