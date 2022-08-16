class Solution {
public:
    int solve(int low,int high,int target,vector<int>&nums)
    {
        while(low<=high){
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target)
            return mid;
         else if(nums[mid]<target)
             low=mid+1;
        else
            high=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int start=0;
        int low=0,n=nums.size();
        int temp=n-1;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[start])
                high=mid-1;
            else{temp=mid;
                low=mid+1;
                 }
        }
       if(target>=nums[start])
           return solve(0,temp,target,nums);
        else
            return solve(temp+1,n-1,target,nums);
        
      
        } 
};