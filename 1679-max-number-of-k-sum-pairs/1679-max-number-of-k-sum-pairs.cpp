class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]--;
            if(mp[k-nums[i]]>0&&mp[nums[i]]>=0)
                {
                mp[k-nums[i]]--;
                //cout<<nums[i]<<" "<<k-nums[i]<<" "<<mp[k-nums[i]]<<endl;
                cnt++;
            }
        }
        return cnt;
    }
};