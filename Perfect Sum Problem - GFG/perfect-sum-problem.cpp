//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod = 1e9+7;
	int solve(int ind,int target,vector<vector<int>>&dp,int arr[])
	{
	   
	    if(ind==0) 
	    {   if(target==0&&arr[0]==0) return 2;
	        if(arr[0]==target||target==0) return 1;
	        return 0;
	    }
	    if(dp[ind][target]!=-1)  return dp[ind][target];
	    int notpick=solve(ind-1,target,dp,arr);
	    int take=0;
	    if(arr[ind]<=target)
	    take=solve(ind-1,target-arr[ind],dp,arr);
	    return dp[ind][target]=(take+notpick)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(n-1,sum,dp,arr);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends