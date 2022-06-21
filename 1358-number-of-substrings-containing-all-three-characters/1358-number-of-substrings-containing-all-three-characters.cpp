class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int start=0;
        int end=0;
        int res=0;
        map<char,int>mp;
        while(end<n)
        { int cnt=0;
            mp[s[end]]++;
            if(mp['a']>0&&mp['b']>0&&mp['c']>0){
               
                cnt+=n-end;
            int p=-1;
            while(start<end&&mp['a']>0&&mp['b']>0&&mp['c']>0)
            {
                mp[s[start]]--;
                start++;
                p++;
                
            }
            cnt+=(cnt*p);
            res+=cnt;
            }
         end++;
            
            
        }
        return res;
       
    }
};