#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

vector<int> row;
vector<int> col;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(matrix[i][j]==0)
		{
			row.push_back(i);
			col.push_back(j);
		}
	}
}

for(auto it:row)
{
	for(int j=0;j<m;j++)
	{
		matrix[it][j]=0;
	}
}

for(auto it:col)
{
	for(int i=0;i<n;i++)
	{
		matrix[i][it]=0;
	}
}

return matrix;
}
