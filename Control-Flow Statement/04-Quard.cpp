#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int ang;
    scanf("%d",&ang);
    if(ang%180==0)  printf("x-axis");
    else if(ang%90==0)  printf("y-axis");
    else if(ang>=0)
    {
        if(ang%360<90)   printf("1");
        else if(ang%360<180)   printf("2");
        else if(ang%360<270)   printf("3");
        else                printf("4");
    }
    else
    {
        ang*=-1;
        if(ang%360<90)  printf("4");
        else if(ang%360<180)    printf("3");
        else if(ang%360<270)    printf("2");
        else            printf("1");
    }

    return 0;
}
