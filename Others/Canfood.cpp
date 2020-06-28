#include <bits/stdc++.h>
using namespace std;

int main (){
	int q,cnt=0;
	cin >> q;
	int a,b;
	while(q--){
		cin >> a >> b;
		if(a>400)
	       		continue;
 		if(b<150 || b>200)
			continue;
		cnt++;		
	}
	cout << cnt << endl;
	return 0;
}
