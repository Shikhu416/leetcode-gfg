//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int solve(int ind,int target,int price[],vector<vector<int>>&dp)
  {    if(ind==0)
        {
           if(target>=1)
              return price[0]*target;
          return 0;
        }
    if(dp[ind][target]!=-1) return dp[ind][target];
      int nottake=solve(ind-1,target,price,dp);
      int take=INT_MIN;
      if(ind+1<=target)
      {
          take=price[ind]+solve(ind,target-ind-1,price,dp);
      }
      return dp[ind][target]=max(take,nottake);
  }
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n-1,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends