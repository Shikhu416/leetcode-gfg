class Solution {
public:
    
    
    string minWindow(string s, string t) {
       int target=t.length();
        int left=0,right=0,n=s.length(),ans=INT_MAX;string shik="";
        map<char,int>mp;
        for(int i=0;i<target;i++)
        {
            mp[t[i]]++;
        }
        while(right<n)
        {
           mp[s[right]]--;
            if(mp[s[right]]>=0)
                target--;
            while(target==0)
            {if(right-left+1<ans)
            {
                ans=right-left+1;
                shik=s.substr(left,right-left+1);
            }
                mp[s[left]]++;
                if(mp[s[left]]>0)
                    target++;
                left++;
            }
            
            right++;
        }
        return shik;
        
    }
};