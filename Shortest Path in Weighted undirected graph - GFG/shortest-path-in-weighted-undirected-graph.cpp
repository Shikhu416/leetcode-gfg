//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
      
       bool flag=false;
       vector<pair<int,int>>adj[n+1];
       int start=-5,end=-5;
       for(int i=0;i<m;i++)
       {
           adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
           adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
       }
       priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
       unordered_map<int,int>mp;
       pq.push({0,1,-1});
       vector<int>dis(n+1,INT_MAX);
       dis[1]=0;
       while(!pq.empty())
       {
           int curr_node=pq.top()[1];
           int dist_curr=pq.top()[0];
           int parent=pq.top()[2];
           //cout<<curr_node<<" "<<dist_curr<<" "<<parent<<endl;
           if(curr_node==n)
           {
               start=parent;
               flag=true;
               break;
           }
           pq.pop();
           
           if(mp[curr_node]==0)
             mp[curr_node]=parent;
           for(auto it=adj[curr_node].begin();it!=adj[curr_node].end();it++)
           {
               int next=it->first;
               int next_dis=it->second;
               if(dis[next]>dis[curr_node]+next_dis)
               {
                   dis[next]=dist_curr+next_dis;
                   pq.push({dis[next],next,curr_node});
               }
           }
           
       } vector<int>res;
       if(!flag) return {-1};
       
       else
       {res.push_back(n);
           while(start!=1)
           {
               res.push_back(start);
               start=mp[start];
           }
           
       }
       res.push_back(1);
       reverse(res.begin(),res.end());
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends