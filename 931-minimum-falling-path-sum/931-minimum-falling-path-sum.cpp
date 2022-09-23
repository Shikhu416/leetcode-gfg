class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<vector<int>>&matrix,int i,int j)
    { if(j<0||j>=matrix[0].size()) return INT_MAX;
        if(i==matrix.size()-1)
            return matrix[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
            return dp[i][j]=matrix[i][j]+min(solve(dp,matrix,i+1,j),min(solve(dp,matrix,i+1,j+1),solve(dp,matrix,i+1,j-1)));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        for(int j=0;j<matrix[0].size();j++)
        {
            ans=min(ans,solve(dp,matrix,0,j));
            
        }
        return ans;
    }
};