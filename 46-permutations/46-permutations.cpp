class Solution {
public:
    void solve(int index,vector<int>&nums,vector<vector<int>>&shikhar)
    {
        if(index==nums.size())
        {
            shikhar.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            solve(index+1,nums,shikhar);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>shikhar;
        vector<int>v;
        solve(0,nums,shikhar);
        return shikhar;
    }
};