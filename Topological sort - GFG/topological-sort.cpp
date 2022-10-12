//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void solve(int n,vector<int>adj[],vector<int>&vis,stack<int>&s,int i)
	{
	    
	    for(auto elem:adj[i])
	    {
	        if(!vis[elem])
	         solve(n,adj,vis,s,elem);
	    }
	    vis[i]=1;
	    s.push(i);
	}
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	   vector<int>vis(n,0);
	   stack<int>s;
	   for(int i=0;i<n;i++)
	   {
	       if(!vis[i])
	         solve(n,adj,vis,s,i);
	   }
	   vector<int>res;
	   while(!s.empty())
	   {
	       res.push_back(s.top());
	       s.pop();
	   }
	   return res;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
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
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends