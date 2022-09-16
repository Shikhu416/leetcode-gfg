class Solution {
public:
   static bool compare(const pair<char, int>&a, const pair<char, int>&b)
{
   return a.second<=b.second;
}
    int characterReplacement(string s, int k) {
        int n=s.length(),left=0,right=0,ans=0;
        unordered_map<char,int>mp;
     while(right<n)
     {
         mp[s[right]]++;
         int siz=(right-left+1);
        int maxn = max_element(mp.begin(), mp.end(), compare)->second;
         while((siz-maxn)>k)
         {
             mp[s[left]]--;
            
             maxn = max_element(mp.begin(), mp.end(), compare)->second;
             left++;
              siz=(right-left+1);
         }
          ans=max(ans,(right-left+1));
         right++;
     }
      
       return ans;
            
       
    }
};