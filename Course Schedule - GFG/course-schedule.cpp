//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
  bool solve(vector<int>adj[],int i,stack<int>&s,vector<int>&vis,vector<int>&esitesi)
  {
      vis[i]=1;
      esitesi[i]=1;
      for(auto elem:adj[i])
      {
          if(!vis[elem]){
           if(solve(adj,elem,s,vis,esitesi))
             return true;
          }
         else if(esitesi[elem])
           return true;
      }
      s.push(i);
      esitesi[i]=0;
      return false;
  }
    vector<int> findOrder(int n, int m, vector<vector<int>> v) 
    {
        vector<int>adj[n];
        stack<int>s;
        vector<int>vis(n,0);
        vector<int>esitesi(n,0);
         vector<int>res;
        for(int i=0;i<m;i++)
        {
            int fst=v[i][0];
            int sec=v[i][1];
            adj[sec].push_back(fst);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
             {//cout<<i<<endl;
               if(solve(adj,i,s,vis,esitesi))
                  return res;
             }
        }
       
        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends