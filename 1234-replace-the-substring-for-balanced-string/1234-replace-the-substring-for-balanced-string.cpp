class Solution {
public:
    int balancedString(string s) {
        int n=s.length();
        int sum=0;  
        map<char,int>mp;
        map<char,int>comp;
        comp['Q']=0;
        comp['W']=0;
        comp['E']=0;
        comp['R']=0;
        int cntq=0,cntw=0,cnte=0,cntr=0;
        for(int  i=0;i<n;i++)
        {
            if(s[i]=='Q')
                cntq++;
            if(s[i]=='W')
                cntw++;
            if(s[i]=='E')
                cnte++;
            if(s[i]=='R')
                cntr++;
        }
        if(cntq>n/4)
            mp['Q']=cntq-n/4;
        else
             mp['Q']=0;
            
         if(cntw>=n/4)
            mp['W']=cntw-n/4;
        else
             mp['W']=0;
         if(cnte>=n/4)
            mp['E']=cnte-n/4;
        else
             mp['E']=0;
         if(cntr>=n/4)
            mp['R']=cntr-n/4;
        else
             mp['R']=0;
       if(mp==comp)
           return 0;
        int start=0,end=0,len=INT_MAX;
        while(end<n)
        {
            if(mp[s[end]]>0)
                comp[s[end]]++;
            if(comp['Q']>=mp['Q']&&comp['W']>=mp['W']&&comp['E']>=mp['E']&&comp['R']>=mp['R'])
            {
                while(comp['Q']>=mp['Q']&&comp['W']>=mp['W']&&comp['E']>=mp['E']&&comp['R']>=mp['R']&&start<n)
                {
                    if(end-start+1<len)
                        len=end-start+1;
                    if(mp[s[start]]>0)
                    {
                        comp[s[start]]--;
                    }
                    start++;
                    
                }
            }
            end++;
        }
        return len;
    }
};