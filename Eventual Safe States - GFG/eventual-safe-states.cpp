//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
      vector<int> eventualSafeNodes(int n, vector<int> adj[])
    {
        queue<int>q;
        vector<int>indegree(n,0);
        vector<int>shikhar[n];
        for(int  i=0;i<n;i++)
        {
            for(auto elem:adj[i])
        {
            shikhar[elem].push_back(i);
            indegree[i]++;
        }
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
              q.push(i);
        }
        vector<int>res;
        while(!q.empty())
        {
            int to=q.front();
            q.pop();
            res.push_back(to);
            for(auto elem:shikhar[to])
            {
                indegree[elem]--;
                if(indegree[elem]==0)
                   q.push(elem);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends