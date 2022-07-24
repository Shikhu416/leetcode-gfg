class Solution {
public:
    vector<vector<int>>shiv;
    map<vector<int>,int>mp;
  void solve(vector<int>&v,int i,vector<int>&shikhar)
  {
      if(i==v.size()){
          vector<int>temp=shikhar;
          sort(temp.begin(),temp.end());
          if(mp[temp]==0){
          shiv.push_back(temp);
              mp[temp]=1;
      }
         
          return;
      }
          
      solve(v,i+1,shikhar);
      shikhar.push_back(v[i]);
      solve(v,i+1,shikhar);
      shikhar.pop_back();
  }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>shikhar;
        solve(nums,0,shikhar);
        return shiv;
    }
};