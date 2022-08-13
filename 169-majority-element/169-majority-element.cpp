class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[res])
                cnt++;
            else
                cnt--;
          if(cnt==0)
          {
              cnt=1;
              res=i;
              
          }
        }
        return nums[res];
    }
};