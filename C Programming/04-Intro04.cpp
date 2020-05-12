#include<stdio.h>
//using namespace std;
int main (){
    int d,r,t,f;
    double x;
    scanf("%d %d %d %d",&d,&r,&t,&f);
    x = d/(t-r);
    x *= f;
    printf("%.2lf",x);
    return 0;
}
/*
inp :
10 1 2 300
out :
3000.00

inp :
20 2 4 200
out :
2000.00
*/
