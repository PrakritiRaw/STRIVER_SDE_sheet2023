#include <bits/stdc++.h>

void doZero(vector<vector<int>> &matrix,int i, int j)
{
	for(int a=0;a<matrix.size();a++) if(matrix[a][j]!=0)matrix[a][j]=-1;
    for(int a=0;a<matrix[0].size();a++) if(matrix[i][a]!=0)matrix[i][a]=-1;
}

void setZeros(vector<vector<int>> &matrix)
{
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[0].size();j++)
		{
			if(matrix[i][j]==0)
			{   
				doZero(matrix,i,j);
			}
		}
	}

	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[0].size();j++)
		{
			if(matrix[i][j]==-1)
			{matrix[i][j]=0;}
		}
	}
}
