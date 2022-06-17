class Solution {
public:
    string defangIPaddr(string s) {
        int n=s.size();
        string shikhar="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                shikhar+='[';
                 shikhar+='.';
                 shikhar+=']';
            }
            else
            {
                shikhar+=s[i];
            }
        }
        return shikhar;
        
        
    }
};