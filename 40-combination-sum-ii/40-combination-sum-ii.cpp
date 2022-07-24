class Solution {
public:
    vector<vector<int>>shiv;

    void solve(vector<int>&giben,int target,int i,vector<int>&shikhar)
    {
        if(target==0)
          {  
            shiv.push_back(shikhar);
            return;
          }
      for(int j=i;j<giben.size();j++)
      {
          if(j>i&&giben[j]==giben[j-1]) continue;
          if(giben[j]>target) break;
          shikhar.push_back(giben[j]);
          solve(giben,target-giben[j],j+1,shikhar);
          shikhar.pop_back();
      }
       
     }
    
    vector<vector<int>> combinationSum2(vector<int>& giben, int target) {
        sort(giben.begin(),giben.end());
        vector<int>shikhar;
        solve(giben,target,0,shikhar);
        return shiv;
    }
};