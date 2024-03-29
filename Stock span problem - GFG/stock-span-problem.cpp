//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>>s;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           s.push({price[i],i});
           while(!s.empty()&&s.top().first<=price[i])
           {
               s.pop();
               
           }
           if(s.empty())
             {
                 v.push_back(i+1);
                 s.push({price[i],i});
             }
          else
          {
              v.push_back(i-s.top().second);
              s.push({price[i],i});
          }
       }
       return v;
    }
   
    
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends