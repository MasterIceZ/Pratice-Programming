#include<bits/stdc++.h>
using namespace std;
int32_t main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,a,b;
  double r;
  cin >> n >> a >> b >> r;
  /*
    r^2 <= (x-a)^2+(y-b)^2
  */ 
  int cnt = 0;
  while(n--){
    double x,y;
    cin >> x >> y;
    if(pow(r,2)>=pow(x-a,2)+pow(y-b,2)){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
