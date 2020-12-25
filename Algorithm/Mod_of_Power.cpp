#include <iostream>

using namespace std;

int mod_of_power(int base,int power,int MOD){
	if(power==0){
		return 1%MOD;
	}
	int k = mod_of_power(base,power/2,MOD)%MOD;
	if(power%2==0){
		return (k*k)%MOD;
	}
	return ((k*k)%MOD*base,MOD)%MOD;
}

int main (){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b,mod;
  cin >> a >> b >> mod;
  cout << mod_of_power(a,b,mod);
  return 0;
}
