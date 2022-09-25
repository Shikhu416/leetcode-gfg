class Solution {
public:
    int solve(vector<vector<int>>&grid,vector<vector<int>>&dp,int m,int n)
    {
        if(m<0||n<0) return INT_MAX;
        if(m==0&&n==0) return grid[m][n];
        if(dp[m][n]!=-1) return dp[m][n];
        else
            return dp[m][n]=grid[m][n]+min(solve(grid,dp,m-1,n),solve(grid,dp,m,n-1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[0][0]=grid[0][0];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {int mini=grid[i][j];
                int left=INT_MAX,up=INT_MAX;
             if(i==0&&j==0)
                 dp[i][j]=grid[i][j];
             else{
                if(j>0) left=dp[i][j-1];
                if(i>0) up=dp[i-1][j];
                mini+=min(left,up);
                dp[i][j]=mini;
             }
            }
        }
        return dp[m-1][n-1];
    }
};