#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char a[110];
int main () {
    int len,i,face;
    scanf(" %s",a);
    len = strlen(a);
    face = 0;
    /**
    face
    0 = N
    1 = E
    2 = S
    3 = W
    */
    for(i=0; i<len; i++) {
        if(a[i]=='Z'){
            printf("Z");
            face = 0;
        }

        else if(a[i]=='N') {
            if(face==0)
                printf("F");
            else if(face==1)
                printf("RRRF");
            else if(face==2)
                printf("RRF");
            else
                printf("RF");
            face=0;
            }
        else if(a[i]=='E') {
            if(face==0)
                printf("RF");
            else if(face==1)
                printf("F");
            else if(face==2)
                printf("RRF");
            else
                printf("RRRF");
            face=1;
            }
        else if(a[i]=='S') {
            if(face==0)
                printf("RRF");
            else if(face==1)
                printf("RF");
            else if(face==2)
                printf("F");
            else
                printf("RRRF");
            face=2;
            }
        else {
            if(face==0)
                printf("RF");
            else if(face==1)
                printf("RRF");
            else if(face==2)
                printf("RRRF");
            else
                printf("F");
            face=3;
            }
        }
    ///printf();
    return 0;
    }
