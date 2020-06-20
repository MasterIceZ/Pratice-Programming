///Gravity Game
#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int n;
void pl(int i,int j){
    int ii,jj;
    ii = i;
    jj = j-1;
    if(jj==-1||jj==n)
        return ;
    if(a[ii][jj]=='.'){
        ///mark
        a[ii][jj] = '#';
        a[i][j] = '.';
        pl(ii,jj);
    }

}
void pd(int i,int j){
    int ii,jj;
    ii = i+1;
    jj = j;
    if(ii==-1||ii==n)
        return ;
    if(a[ii][jj]=='.'){
        a[ii][jj] = '#';
        a[i][j] = '.';
        pd(ii,jj);
    }
}
int main ()
{
    //int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]=='#')
                pl(i,j);
        }
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<n;j++){
            if(a[i][j]=='#')
                pd(i,j);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/**
5
.....
.#.#.
.###.
...##
#....
*/
