//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& s) {
	    vector<int>adj[n];
	    vector<int>indegree(n,0);
	    queue<int>q;
	    vector<int>vis(n,0);
	    vector<int>check(n,1);
	    for(int i=0;i<s.size();i++)
	    {
	        int fst=s[i].first;
	        int sec=s[i].second;
	        adj[sec].push_back(fst);
	        indegree[fst]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(indegree[i]==0)
	          q.push(i);
	    }
	    int cnt=0;
	    while(!q.empty())
	    {
	        int shikhar=q.front();
	        q.pop();cnt++;
	        
	        for(auto elem:adj[shikhar])
	        {
	            indegree[elem]--;
	            if(indegree[elem]==0)
	             q.push(elem);
	        }
	    }
	   if(cnt==n) return true;
	   return false;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends