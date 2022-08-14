class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>shikhar;
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           if(mp.find(target-nums[i])!=mp.end())
           {
               shikhar.push_back(i);
               shikhar.push_back(mp[target-nums[i]]);
               return shikhar;
           }
           else
           {
               mp[nums[i]]=i;
           }
       }
        return shikhar;
      
    }
};