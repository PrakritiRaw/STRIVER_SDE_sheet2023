class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        if(numRows>=1)
        {   for(int i=0;i<numRows;i++) 
                ans[i].push_back(1);
         
            for( int i=1;i<numRows;i++)
            { 
              for(int k=1;k<i;k++)
                  ans[i].push_back(ans[i-1][k-1]+ans[i-1][k]);
             ans[i].push_back(1);
                
            }
         
         
         return  ans;
        }
        return  ans;
    }
};
