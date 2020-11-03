#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,y,cnt=0;
    cin >> n;
    while(n--){
      cin >> x >> y ;
      if(x>=100 and x<=750 and y>=80){
        cnt++;
      }
    }
    cout << cnt;
    return 0;
}
