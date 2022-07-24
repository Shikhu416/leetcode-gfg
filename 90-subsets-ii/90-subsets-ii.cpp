class Solution {
public:
    vector<vector<int>>shiv;
    map<vector<int>,int>mp;
  void solve(vector<int>&v,int i,vector<int>&shikhar)
  {
      if(i==v.size()){
         
          if(mp[shikhar]==0){
          shiv.push_back(shikhar);
              mp[shikhar]=1;
      }
         
          return;
      }
          
      solve(v,i+1,shikhar);
      shikhar.push_back(v[i]);
      solve(v,i+1,shikhar);
      shikhar.pop_back();
  }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>shikhar;
        solve(nums,0,shikhar);
        return shiv;
    }
};