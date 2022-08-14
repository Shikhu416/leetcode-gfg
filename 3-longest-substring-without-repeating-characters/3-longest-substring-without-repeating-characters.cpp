class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int shikhar=0;
        int  left=0;
        int right=0;
        int n=s.size();
        unordered_map<int,int>mp;
          while(right<n)
            {
                if(mp[s[right]]==0){
                     mp[s[right]]++;
                    shikhar=max(shikhar,(right-left+1));
                    right++;
                }
                else
                {
                    while(mp[s[right]]>0&&left<right)
                    {
                        mp[s[left]]--;
                        left++;
                    }
                }
                
            
        }
        return shikhar;
    }
};