class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=0;i<s.length();i++)
        {   if(i==s.size()/2)
            return false;
            int j;
            string temp=s.substr(0,i+1);
        // cout<<temp<<endl;
            for( j=i+1;j+temp.size()<s.size()+1;j+=(temp.size()))
            {
                string temp2=s.substr(j,temp.size());
               // cout<<temp2<<endl;
                if(temp2==temp)
                    continue;
                else
                    break;
            }
         if(j==s.size())
             return true;
         
        }
        return false;
        
        
        
    }
};