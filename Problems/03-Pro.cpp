#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    int i;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=3; i<=sqrt(n); i+=2) {
        if(n%i==0)
            return false;
        }
    return true;
    }
int main () {
    int n;
    scanf("%d",&n);
    if(n==1) {
        printf("No");
        return 0;
        }
    if(isPrime(n))
        printf("Yes");
    else
        printf("No");
    return 0;
    }
