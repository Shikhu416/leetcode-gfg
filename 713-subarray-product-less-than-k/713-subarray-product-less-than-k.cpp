class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0,left=0,right=0,p=1,flag=true; 
        if(k<=1)
            return 0;
        while(right<nums.size())
        {
            p*=nums[right];
            while(p>=k)
                p/=nums[left++];
            ans+=(1+(right-left));
            right++;
        
    }
        return ans;
    }
};