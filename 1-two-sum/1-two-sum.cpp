class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>temp;
        
        temp=nums;
        vector<int>shikhar;
        sort(temp.begin(),temp.end());
       int first,second;
        int l=0;
        int r=nums.size()-1;
        while(l<r)
              {
                  if(temp[l]+temp[r]==target)
                  {
                      first=temp[l];
                      second=temp[r];
                      break;
                  }
                 else if(temp[l]+temp[r]<target)
                {
                  l++;
                 }
               else if(temp[l]+temp[r]>target)
              {
                r--;
               }
            
              }
       
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==first)
            {
                shikhar.emplace_back(i);
                
            }
            else if(nums[i]==second)
            {
                shikhar.emplace_back(i);
                
            }
        }
        return shikhar;
    }
};