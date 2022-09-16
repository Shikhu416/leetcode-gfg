class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int gola) {
        int left=0,right=0,cnt=0,curr=0,n=nums.size();int temp=left;
        while(right<n)
        {
            curr+=nums[right];
            while(curr>gola)
            {
                curr-=nums[left++];
            }
            if(curr==gola)
            {   if(left<=right)
                cnt++;
             temp=left;
                while(nums[temp]==0&&temp<right)
                {
                    temp++;
                    cnt++;
                }
            }
            //temp=left;
            right++;
        }
         return cnt; 
    }
};