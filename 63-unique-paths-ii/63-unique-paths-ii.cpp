class Solution {
public:
    int solve(vector<vector<int>>&v,vector<vector<int>>&dp,int m,int n)
    {
        if(m>=0&&n>=0&&v[m][n]==1) return 0;
        if(m==0&&n==0) return 1;
        if(m<0||n<0) return  0;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=solve(v,dp,m-1,n)+solve(v,dp,m,n-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m=v.size(),n=v[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(v,dp,m-1,n-1);
    }
};