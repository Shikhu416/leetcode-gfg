class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int left=0;
        int right=0;
        bool flag=false;
        int  p=1;
        while(right<nums.size())
        {//cout<<left<<" "<<right<<endl;
            if(p*nums[right]<k){
                p*=nums[right];
                right++;
                flag=true;
            }
            else
            {
                ans+=(right-left);
                //cout<<ans<<endl;
                if(flag)
                    //cout<<p<<" ";
                p/=nums[left];
                //cout<<p<<endl;
                
                left++;
                if(right<left)
                    right=left;
               if(p==1)
                   flag=false;
                
            }
        }
        int z=(right-left);
        //cout<<z<<endl;
        ans+=(z*(z+1)/2);
        return ans;
        
    }
};