#include<stdio.h>
#include<math.h>
int main (){
    double x1,x2,x3,y1,y2,y3,k;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    double a,b,c,s;
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    s = (a+b+c)/2;
    double norm_area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf\n",norm_area);
    double spc_area = k*(a+b+c)+M_PI*k*k;
    printf("%.2lf",spc_area);
    return 0;
}
