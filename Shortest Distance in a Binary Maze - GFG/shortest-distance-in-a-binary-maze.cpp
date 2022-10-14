//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
                         
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>v(n,vector<int>(m,INT_MAX));
        v[source.first][source.second]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{source.first,source.second}});
        vector<int>dx{1,-1,0,0};
        vector<int>dy{0,0,-1,1};
        while(!q.empty())
        {
            int x=q.front().second.first;
            int y=q.front().second.second;
            int curr=q.front().first;
            q.pop();
           
            for(int i=0;i<4;i++)
            {
               if(x+dx[i]>=0&&x+dx[i]<n&&y+dy[i]>=0&&y+dy[i]<m&&v[x+dx[i]][y+dy[i]]>curr+1&&grid[x+dx[i]][y+dy[i]]==1)
               {
                    v[x+dx[i]][y+dy[i]]=curr+1;
                    q.push({curr+1,{x+dx[i],y+dy[i]}});
                    
               }
            }
        }
        if(v[destination.first][destination.second]==INT_MAX) return -1;
        else
        return v[destination.first][destination.second];
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends