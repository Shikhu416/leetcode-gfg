class Solution {
public:
    int solve(vector<int>&v,int k)
    {
        int left=0,right=0,cnt=0,n=v.size();
        unordered_map<int,int>mp;
        while(right<n)
        {
            mp[v[right]]++;
            while(mp.size()>k)
            {
                mp[v[left]]--;
                if(mp[v[left]]==0)
                    mp.erase(v[left]);
                left++;
            }
            cnt+=(right-left+1);
            right++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& v, int k) {
        return solve(v,k)-solve(v,k-1);
    }
};