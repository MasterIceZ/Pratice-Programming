#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int i,n,A,B;
	char opr;
	cin >> n;
	A=0;
	B=0;
	for(i=0;i<n;i++)
	{
		cin >> opr;
		if(opr=='A')
		{
			A++;
		}
		else
		{
			B++;
		}
	}
	if(A-B==1 || B-A==1)
	{
		cout << "Y";	
	}
	else
	{
		cout << "N";
	}
	cout << endl;
}

int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int q,i;
	i = 0;
	cin >> q;		
	while(q--)
	{
		i++;
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
