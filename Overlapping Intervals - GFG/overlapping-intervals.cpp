//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& v) {
       vector<vector<int>>res;
       sort(v.begin(),v.end());
       int start=v[0][0];
       int end=v[0][1];
       //res.push_back({start,end});
       for(int i=1;i<v.size();i++)
       {
           if(v[i][0]<=end)
           {
               if(v[i][1]<=end)
               {
                   continue;
               }
               else
               {
                   end=v[i][1];
                   //res.push_back({start,end});
               }
           }
           else
           {res.push_back({start,end});
               start=v[i][0];
               end=v[i][1];
               //res.push_back({start,end});
           }
       }
       res.push_back({start,end});
       return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends