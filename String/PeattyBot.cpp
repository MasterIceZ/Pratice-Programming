#include <bits/stdc++.h>
using namespace std;
char a[111];
int main (){
	int posx=0,posy=0;
	scanf(" %s",a);
	int len = strlen(a);
	int i;
	for(i=0;i<len;i++){
		if(a[i]=='N')
			posy++;
		else if(a[i]=='S')
			posy--;
		else if(a[i]=='E')
			posx++;
		else if(a[i]=='W')
			posx--;
        else
            posx = posy = 0;
	}
	printf("%d %d",posx,posy);
	return 0;
}
