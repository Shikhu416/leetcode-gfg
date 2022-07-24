class Solution {
public:
    vector<vector<int>>shiv;
    void solve(vector<int>&giben,int target,int i,vector<int>&shikhar,bool flag)
    {
    if(i==giben.size())
        {
          if(target==0)
          {
              shiv.push_back(shikhar);
          }
          return;
        }
      solve(giben,target,i+1,shikhar,flag);
     if(giben[i]<=target){
           shikhar.push_back(giben[i]);
      solve(giben,target-giben[i],i,shikhar,flag);
    
         
       shikhar.pop_back();
     }
    }
    vector<vector<int>> combinationSum(vector<int>&giben, int target) {
        vector<int>shikhar;
        solve(giben,target,0,shikhar,false);
        return shiv;
    }
};