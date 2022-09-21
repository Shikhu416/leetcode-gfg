class Solution {
public:
    int solve(vector<vector<int>>&arr,vector<vector<int>>&dp,int i,int j)
    {
        if(i==arr.size()-1&&j==arr[0].size()-1)
            return arr[i][j];
        if(i==arr.size()||j==arr[0].size()) return INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=arr[i][j]+min(solve(arr,dp,i+1,j),solve(arr,dp,i,j+1));
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       
        return solve(grid,dp,0,0);
    }
};