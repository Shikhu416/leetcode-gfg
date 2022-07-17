class Solution {
public:
   void nextPermutation(vector<int>& nums) 
    {
        int n=nums.size();
       int l;
       for(l=n-2;l>=0;l--)
       {
           if(nums[l]<nums[l+1])
           {
               break;
           }
       }
       if(l<0){
         sort(nums.begin(),nums.end());
       }
       else
       {
           int r=n-1;
           for(r=n-1;r>l;r--)
           {
               if(nums[r]>nums[l])
                   break;
           }
           swap(nums[l],nums[r]);
           sort(nums.begin()+l+1,nums.end());
       }
       
    }
};