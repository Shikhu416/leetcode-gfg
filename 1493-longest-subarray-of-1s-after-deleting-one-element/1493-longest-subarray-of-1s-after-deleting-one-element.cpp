class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),1)==nums.size())
            return nums.size()-1;
        
       vector<pair<int,int>>v;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {int cnt=0;
             int start=i;
                while(i<nums.size()&&nums[i]==1)
                {
                    cnt++;
                    i++;
                }
             maxi=max(maxi,cnt);
            // cout<<start<<cnt<<i;
             v.push_back({start,cnt});
            }
        }
      // for(auto elem:v)
      // {
      //     cout<<elem.first<<" "<<elem.second<<endl;
      // }
       
        if(v.size()==0)
            return 0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(((v[i+1].first)-(v[i].first+v[i].second)<=1))
                maxi=max(maxi,(v[i+1].second+v[i].second));
        }
    return maxi;
       
        
        
        
    }
};