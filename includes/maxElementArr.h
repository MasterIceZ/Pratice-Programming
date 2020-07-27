
int mxelement2d(int matrix[][],int n)
{
	int i,j,mx=-1e9;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mx = max(matrix[i][j],mx);
		}
	}
	return mx;
}
