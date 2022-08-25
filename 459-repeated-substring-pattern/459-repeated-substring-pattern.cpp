class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=0;i<s.length()/2;i++)
        {   
            int j;
            string temp=s.substr(0,i+1);
            if((s.length()%temp.length())==0)
            {
            for( j=i+1;j+temp.size()<s.size()+1;j+=(temp.size()))
            {
                string temp2=s.substr(j,temp.size());
                if(temp2==temp)
                    continue;
                else
                    break;
            }
         if(j==s.size())
             return true;
            }
         
        }
        return false;
        
        
        
    }
};