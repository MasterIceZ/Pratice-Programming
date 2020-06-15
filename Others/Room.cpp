#include<bits/stdc++.h>
using namespace std;
char a[31][31];
int di[]={1,-1,0,0};
int dj[]={0,0,-1,1};
int mark[32][32];
int row,col,cnt=0;
void play (int i,int j){
    //printf("%d %d\n",i,j);
    mark[i][j] = 1;
    int ii,jj;
    int k;
    for(k=0;k<4;k++){
        ii = i + di[k];
        jj = j + dj[k];
        //check edge,#
        if(ii<1||ii>row||jj<1||jj>col||a[ii][jj]=='#'){
            continue;
        }
        if(mark[ii][jj]==1)
            continue;
        if(a[ii][jj]=='*'){
            cnt++;
        }
        play(ii,jj);
    }

}
int main ()
{
    //int row,col;
    scanf("%d %d",&row,&col);
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(a[i][j]=='A'){
                play(i,j);
	   }
	    if(a[i][j]=='W'){
		play(i,j);
	    }
        }
    }
    printf("%d",cnt);
    return 0;
}
/**
5 7
A*.#...
..#..*#
.*####.
##..#..
.#.*#..

5 7
A*.#...
.W#..*#
.*####.
##WW#.W
W#.*#..

*/
