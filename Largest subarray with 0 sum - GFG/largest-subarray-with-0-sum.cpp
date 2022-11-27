//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&v, int n)
    {   
        int size=0;
        int j=0;
        int sum=0;
        int len=0;
        unordered_map<int,int>mp;
        while(j<n)
        {
            sum+=v[j];
            if(sum==0)
            len=max(len,j+1);
           if(mp.find(sum)!=mp.end())
           {
               len=max(len,j-mp[sum]);
              // cout<<sum<<" "<<j<<endl;
               
           }
           if(mp.find(sum)==mp.end())
           mp[sum]=j;
           j++;
            
        }
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends