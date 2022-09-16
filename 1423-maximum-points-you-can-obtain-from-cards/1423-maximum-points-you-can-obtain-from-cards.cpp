class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int sumex=accumulate(v.begin(),v.end(),0);
        
        int left=0,right=0,n=v.size(),ans=INT_MAX,sum=0;
        int shikhu=n-k;
        //cout<<shikhu;
        while(right<n)
        {
             sum+=(v[right]);
            if((right-left+1)>shikhu)
            {
                sum-=v[left];
                left++;
            }
            if(right-left+1==shikhu)
                ans=min(ans,sum);
            right++;
        }
     
        return sumex-ans;
        
        
        
    }
};