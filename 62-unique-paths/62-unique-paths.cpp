class Solution {
public:
   
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m,vector<int>(n,0));
       
        for(int i=0;i<m;i++)
        { 
            for(int j=0;j<n;j++)
            {    int res=0;
             if(i==0&&j==0)
                    dp[i][j]=1;
             else{
                if(i-1>=0)
                    res+=dp[i-1][j];
                if(j-1>=0)
                    res+=dp[i][j-1];
                dp[i][j]=res;
             }
            }
        }
        return dp[m-1][n-1];
        
    }
};