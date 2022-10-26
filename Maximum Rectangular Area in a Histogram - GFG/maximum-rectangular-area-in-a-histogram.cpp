//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
            vector<long long>prev(n);
            stack<long long>s;
            for(int i=0;i<n;i++)
            {
                while(!s.empty()&&arr[s.top()]>=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                 prev[i]=-1;
                else
                {
                    prev[i]=s.top();
                }
                s.push(i);
                 
            }
            stack<long long>sh;
            vector<long long>next(n);
            for(int i=n-1;i>=0;i--)
            {
                while(!sh.empty()&&arr[sh.top()]>=arr[i])
                {
                    sh.pop();
                }
                if(sh.empty())
                 next[i]=n;
                 else
                 next[i]=sh.top();
                 sh.push(i);
            }
            long long maxi=LLONG_MIN;
            for(int i=0;i<n;i++)
            {
                long long curr=(next[i]-prev[i]-1)*arr[i];
                maxi=max(maxi,curr);
            }
            return maxi;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends