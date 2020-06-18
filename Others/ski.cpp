#include <bits/stdc++.h>
using namespace std;
int l;
bool isOut(int now){
	if(now<0)
		return true ;
	if(now>2*l)
		return true ;
	return false ;
}

int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,i,q,opr,now,mark;
	bool out;
	scanf("%d %d %d",&l,&m,&q);
	while(q--){
		out = false ;
		now = l ;
		mark = 0;
		for(i=0;i<m;i++){
			scanf("%d",&opr);
			if(opr==1)
				now += 1;
			else
				now += -1;
			if(isOut(now)){
				mark = 1;
			}
		}
		if(mark==1)
			printf("0");
		else
			printf("1");
		printf("\n");
	}
	return 0;
}
