#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{int n=matrix.size();
        int m=matrix[0].size();
        int ncount[200]={0}; 
        int mcount[200]={0};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            { if(matrix[i][j]==0)
               {ncount[i]=1;
                mcount[j]=1;}
            }
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(ncount[i]==1||mcount[j]==1) matrix[i][j]=0;
        
}
