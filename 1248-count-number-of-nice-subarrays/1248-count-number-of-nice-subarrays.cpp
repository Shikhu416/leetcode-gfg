class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
        unordered_map<int,int>mp;
        int left=0;int right=0,cnt=0,n=v.size(),ans=0;
        while(right<n)
        {
           if(v[right]%2!=0)
               cnt++;
            if(cnt==k)
                ans++;
            if(mp[cnt-k]>0)
                ans+=mp[cnt-k];
            mp[cnt]++;
            right++;
        }
        return ans;
    }
};