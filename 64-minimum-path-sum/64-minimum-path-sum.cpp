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
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(grid,dp,m-1,n-1);
    }
};