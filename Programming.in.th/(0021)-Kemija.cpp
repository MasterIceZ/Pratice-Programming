#include<bits/stdc++.h>
using namespace std;
char a[1010];
bool vowel (char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        return true;
    return false;
}

int main (){
    /// input => Blocked By P'Kang007
    gets(a);
    /// solve
    int len = strlen(a),i;
    for(i=0;i<len;i++){
        if(vowel(a[i])){
            //printf("EiEi\n");
            printf("%c",a[i]);
            i+=2;
        }
        else
            printf("%c",a[i]);
    }

    return 0;
}
