class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        vector<int>shikhar;
        int start=nums.size()-k;
        for(int i=start;i<nums.size();i++)
        {
            shikhar.push_back(nums[i]);
        }
        for(int i=0;i<start;i++)
        {
            shikhar.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=shikhar[i];
        }
    }
};