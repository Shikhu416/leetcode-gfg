class Solution {
public:
    bool check(string s)
    {
        map<char,int>mp;
        for(auto elem:s)
        {
            mp[elem]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                if(mp[tolower(s[i])])
                    continue;
                else
                    return false;
            }
            else if(islower(s[i]))
            {
                if(mp[toupper(s[i])])
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        int len=INT_MIN;
        string res="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string shikhar=s.substr(i,j-i+1);
                //cout<<shikhar<<endl;
                if(check(shikhar))
                {
                   // cout<<"YES"<<endl;
                    if((j-i+1)>len)
                    {
                        res=shikhar;
                        len=j-i+1;
                    }
                }
                //else
                   // cout<<"NO"<<endl;
            }
        }
        return res;
        
        
        
    }
};