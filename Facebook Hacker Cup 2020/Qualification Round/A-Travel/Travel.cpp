#include <bits/stdc++.h>
using namespace std;

#define INF 1e9;

int matrix[110][110];
char In[110],Out[110];	

void print(int n);

void solve ()
{
	int n,i,j;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> In[i];
	}	
	for(i=1;i<=n;i++)
	{
		cin >> Out[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				matrix[i][j] = 1;
			}
			else if(abs(i-j)==1)
			{
				if(In[j]=='Y'&&Out[i]=='Y')
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
	//Push R -> L
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(abs(i-j)==1 || i==j)
			{
				continue;
			}	
			if(In[j]=='N' || Out[i]=='N')
			{
				continue;
			}
			if(matrix[i][i-1]&&matrix[i-1][j])
			{
				matrix[i][j] = 1;
			}

		}
	}
	for(j=n;j>=1;j--)
	{
		for(i=n;i>=1;i--)
		{
			if(abs(i-j)==1)
			{
				continue;
			}
			if(In[j]=='N' || Out[i]=='N')
			{
				continue;
			}
			if(matrix[i][i+1]&&matrix[i+1][j])
			{
				matrix[i][j] = 1;
			}
		}
	}
	print(n);
}

int main () 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i=1,q;
	cin >> q;
	while(q--)
	{
		memset(matrix,0,sizeof matrix);
		cout << "Case #" << i << ":"<<endl;
		i++;
		solve();
	}
	return 0;
}

void print(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(matrix[i][j]==1)
			{
				cout << "Y";
			}
			else
			{
				cout << "N";
			}
		}
		cout << endl;
	}
}
