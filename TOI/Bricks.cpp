/*
 *	AUTHOR : IceBorworntat
 * */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define us unsigned
#define f0(a,b,c) for(a=b;b<c;a++)
#define f1(a,b,c) for(a=b;b<=c;a++)
#define f2(a,b,c) for(a=b;a>c;a--)
#define f3(a,b,c) for(a=b;a>=c;a--)
#define r4i {-1,1,0,0}
#define r4j {0,0,-1,1}
#define r8i {-1,-1,-1,0,0,1,1,1}
#define r8j {-1,0,1,-1,1,-1,0,1}

int row,col,state,check;
int k;
char a[25][25];
int arr[25];

void play (int i,int j,int state)
{
    i--;
    state--;
    check=1;
    if(state<0)
        return ;
    if(i<0)
        return ;
    a[i][j]='#';

    play(i,j,state);

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> row >> col ;
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin >> a[i][j] ;
        }
    }
    for(i=0; i<col; i++)
    {
        cin >> arr[i];
    }
    for(j=0; j<col; j++)
    {
        check=0;
        for(i=0; i<row; i++)
        {
            //check = 0;
            //i+1==row -> do
            //found 'O' -> do
            if(check!=0)
                continue;
            state = arr[j];
            if(a[i][j]=='O')
            {
                play(i,j,state);
            }
            else if(i==row-1)
            {
                i++;
                play(i,j,state);
            }
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
