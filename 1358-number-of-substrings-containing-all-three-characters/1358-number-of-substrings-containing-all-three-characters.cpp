class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,n=s.length(),ans=0;
        unordered_map<char,int>mp;
        while(right<n)
        {
            mp[s[right]]++;
            while(mp['a']&&mp['b']&&mp['c'])
            {   mp[s[left]]--;
                ans+=(n-right);
                left++;
            }
            right++;
        }
        return ans;
       
    }
};