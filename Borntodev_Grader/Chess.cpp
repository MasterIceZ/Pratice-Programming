#include<bits/stdc++.h>
using namespace std;
//char a[10][10];
int main (){
    int i,j;
    char a;
    int sc1=0,sc2=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
          cin >> a;
          if(a=='P')
            sc1 += 1;
          else if(a=='p')
            sc2 += 1;
          else if(a=='N')
            sc1 += 3;
          else if(a=='n')
            sc2 += 3;
          else if(a=='B')
            sc1 += 3;
          else if(a=='b')
            sc2 += 3;
          else if(a=='R')
            sc1 += 5;
          else if(a=='r')
            sc2 += 5;
          else if(a=='Q')
            sc1 += 9;
          else if(a=='q')
            sc2 += 9;
        }
    }
  if(sc1==sc2)
    cout << "equal";
  else
    cout << sc1-sc2;
    return 0;
}
