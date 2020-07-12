#include<bits/stdc++.h>
using namespace std;
int a[110],b[110];
int main (){
 	int i,n,cnt=0;
  	cin >> n;
  	for(i=1;i<=n;i++){
    	cin >> a[i];
    }
  	int fin;
  	cin >> fin;
  	for(i=1;i<=n;i++){
    	if(a[i]==fin){
          b[cnt] = i;
          cnt++;
        }
    }
  	cout << "Position: ";
  	for(i=0;i<cnt;i++){
      if(i==0)
        cout << b[i];
      else
        cout << "," << b[i]  ;
    }
	return 0;
}
