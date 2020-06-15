#include<iostream>
using namespace std;
int dp[100100];
int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int q;
  cin >> q ;
  if(q<6){
    cout << "no" << endl;
    return 0;
  }
  int i;
  dp[0] = 1;
  for(i=1;i<=q;i++){
    if(i>=6 && dp[i-6])
      dp[i]=1;
    else if(i>=9 && dp[i-9])
      dp[i]=1;
    else if(i>=20 && dp[i-20])
      dp[i]=1;
    if(dp[i])
      cout << i << endl;
  }
  
  return 0;
}