#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int ansx[110],ansy[110];
int n,m,q,len,check;
int di[]= {-1,1,0,0},dj[]= {0,0,-1,1};
int mark[30][30];
char want[110];

void play (int state,int i,int j)
{
    int k,ii,jj;
    ansx[state] = i;
    ansy[state] = j;
    //mark[i][j] = 1;
    //state++;
    //printf("%d %d %d\n",state,i,j);
    if(state==len-1)
    {
        for(k=0; k<len; k++)
            printf("%d %d\n",ansx[k],ansy[k]);
        check=1;
    }
    for(k=0; k<4; k++)
    {
        ii = i + di[k];
        jj = j + dj[k];

        if(ii<1||ii>n||jj<1||jj>m)
            continue;
        if(a[ii][jj]!=want[state+1])
            continue;
        if(mark[ii][jj]==1)
            continue;
        mark[ii][jj] = 1;
        play(state+1,ii,jj);
        mark[ii][jj] = 0;
    }
}

int main ()
{
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        check = 0;
        memset(mark,0,sizeof mark);
        scanf(" %s",want);
        len = strlen(want);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]==want[0])
                {
                    mark[i][j] = 1;
                    play(0,i,j);
                    mark[i][j] = 0;
                    if(check==1)
                        break;
                }
            }
        }
        if(check==0)
            printf("No Matching Word\n");
    }
    return 0;
}
