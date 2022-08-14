class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int  ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j;
        while(i<n)
        {
            j=i+1;
            int cnt=1;
            while(j<n)
            {
                if(nums[j]==nums[j-1]+1){
                    j++;
                    cnt++;
                }
                else if(nums[j]!=nums[j-1])
                    break;
                else
                    j++;
            }
            ans=max(ans,cnt);
            i=j;
        }
        return ans;
    }
};