class Solution {
public:
     int solve(vector<vector<int>>&dp,vector<vector<int>>&matrix,int i,int j)
    { if(j<0||j>=matrix[0].size()) return INT_MAX;
        if(i==matrix.size()-1)
            return matrix[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
     int maxi=INT_MAX;
        for(int k=0;k<matrix[0].size();k++)
        {
            if(k==j)
                continue;
            maxi=min(maxi,solve(dp,matrix,i+1,k));
        }
     return dp[i][j]=maxi+matrix[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        for(int j=0;j<grid[0].size();j++)
        {
            ans=min(ans,solve(dp,grid,0,j));
            
        }
        return ans;
    }
};