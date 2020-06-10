#include<bits/stdc++.h>
using namespace std;
int row,col,cnt,mx=0;
char a[100][1010];
int di[]={-1,1,0,0},dj[]={0,0,-1,1};
void play (int i,int j)
{
    int ii,jj,k;
    a[i][j] = '.';
    cnt++;
    for(k=0;k<4;k++){
        ii = i + di[k];
        jj = j + dj[k];
        //edge
        if(ii<0||ii>=row||jj<0||jj>=col)
            continue;
        if(a[ii][jj]!='*')
            continue;
        play(ii,jj);
    }
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i,j;
    cin >> col >> row ;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin >> a[i][j] ;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cnt = 0;
            if(a[i][j]!='*')
                continue;
            play(i,j);
            mx = max(mx,cnt);
        }
    }
    cout << mx ;
    return 0;
}
