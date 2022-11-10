//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int ind,int target,int nums[],vector<vector<int>>&dp)
{
    if(target==0)  return true;
    if(ind==0)  return (nums[0]==target);
    if(dp[ind][target]!=-1)  return dp[ind][target];
    bool nottake=solve(ind-1,target,nums,dp);
    bool take=false;
    if(nums[ind]<=target)
     take=solve(ind-1,target-nums[ind],nums,dp);
    return dp[ind][target]=take|nottake;
}
    int equalPartition(int n, int nums[])
    {
         int totsum=0;
         //int n=n;
         for(int i=0;i<n;i++)
         {
             totsum+=nums[i];
         }
         if(totsum%2!=0)
          return false;
          vector<vector<int>>dp(n,vector<int>(totsum/2+1,-1));
          return solve(n-1,totsum/2,nums,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends