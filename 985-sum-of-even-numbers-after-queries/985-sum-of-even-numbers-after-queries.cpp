class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even=0,copy=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                even+=nums[i];
        }
    copy=even;
        vector<int>result;
        for(int i=0;i<queries.size();i++)
        {  int p=nums[queries[i][1]];
         //cout<<p<<endl;
            if(nums[queries[i][1]]%2==0)
                even-=nums[queries[i][1]];
              nums[queries[i][1]]+=queries[i][0];
         if(nums[queries[i][1]]%2==0)
             even+=nums[queries[i][1]];
         result.push_back(even);
         //even=copy;
                
        }
        return result;
    }
};