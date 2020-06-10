#include<bits/stdc++.h>
//using namespace std;
int arr[100100];
double arr2[100100];
char arr3[100100];
struct A{
    char x[100];
    bool operator < (const A&o) const {
    if(strcmp(x,o.x)>0)   return x < o.x ;
    return x > o.x ;
    }
};
A a[100100];
int main () {
    int q,n,i;
    scanf("%d %d",&q,&n);
    switch(q){
    case 1 :
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        std::sort(arr,arr+n);
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);
        printf("\n");
        for(i=n-1;i>=0;i--)
            printf("%d ",arr[i]);
        break;
    case 2 :
        for(i=0;i<n;i++)
            scanf("%lf",&arr2[i]);
        std::sort(arr2,arr2+n);
        for(i=0;i<n;i++)
            printf("%.0lf ",arr2[i]);
        printf("\n");
        for(i=n-1;i>=0;i--)
            printf("%.0lf ",arr2[i]);
        break;
    case 3 :
        for(i=0;i<n;i++)
            scanf("%c",&arr3[i]);
        std::sort(arr3,arr3+n);
        for(i=0;i<n;i++)
            printf("%c ",arr3[i]);
        printf("\n");
        for(i=n-1;i>=0;i--)
            printf("%c ",arr3[i]);
        break;
    default :
        for(i=0;i<n;i++)
            scanf(" %s",&a[i].x);
        std::sort(a,a+n);
        for(i=0;i<n;i++)
            printf("%s ",a[i].x);
        printf("\n");
        for(i=n-1;i>=0;i--)
            printf("%s ",a[i].x);
        break;
    }
    return 0;
    }
