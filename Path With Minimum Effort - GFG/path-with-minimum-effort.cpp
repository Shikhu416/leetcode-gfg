//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        vector<int>dx{-1,1,0,0};
        vector<int>dy{0,0,-1,1};
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        dis[0][0]=0;
        while(!pq.empty())
        {
            int till=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            if(x==n-1&&y==m-1) return till;
            for(int i=0;i<4;i++)
            {
                int newx=x+dx[i];
                int newy=y+dy[i];
                if(newx>=0&&newx<n&&newy>=0&&newy<m)
                {
                    int newest=max(abs(heights[x][y]-heights[newx][newy]),till);
                    if(newest<dis[newx][newy])
                    {
                        dis[newx][newy]=newest;
                        pq.push({newest,{newx,newy}});
                    }
                    
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends