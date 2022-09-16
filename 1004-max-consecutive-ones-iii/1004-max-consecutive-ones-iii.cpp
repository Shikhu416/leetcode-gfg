class Solution {
public:
    
    int longestOnes(vector<int>& v, int k) {
       int n=v.size(),left=0,right=0,cnt=0,ans=0;
        while(right<n)
        {
            if(v[right]==0)
                cnt++;
            while(cnt>k)
            {
                if(v[left]==0)
                    cnt--;
                left++;
            }
            ans=max(ans,(right-left+1));
            right++;
        }
        return ans;
    }
};