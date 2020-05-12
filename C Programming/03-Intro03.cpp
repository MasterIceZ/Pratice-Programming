#include<stdio.h>
#include<math.h>
int main (){
    double n,m;
    scanf("%lf %lf",&n,&m);
    printf("Plus: %.2lf\n",n+m);
    printf("Minus: %.2lf\n",n-m);
    printf("Multiply: %.2f\n",n*m);
    printf("Modulo: %.2f\n",(double)((int)n%(int)m));
    printf("Power: %.2f\n",pow(n,m));
    printf("Root: %.2f",pow(n,(1/m)));
    return 0;
}
