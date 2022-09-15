class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
       int n=v.size(),ans,curr=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            int left=i+1,right=n-1;
            while(left<right)
            {
              int k=v[i]+v[left]+v[right];
                int shikhar=abs(target-k);
                if(shikhar<curr)
                {
                    curr=shikhar;
                    ans=k;
                }
                if(k>target)
                    right--;
                else if(k==target)
                    return k;
                else
                    left++;
        }
       
    }
         return ans;
    }
};