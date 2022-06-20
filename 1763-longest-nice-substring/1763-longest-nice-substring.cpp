class Solution {
public:
    string res="";
    int len=INT_MIN;
    string longestNiceSubstring(string shikhar) {  
        if(shikhar.length()==0)
            return "";
        unordered_set<char>s;
        for(auto elem:shikhar)
        {
            s.insert(elem);
        }     
        bool flag=true;
        int p;
        for(int i=0;i<shikhar.length();i++)
        {
            if(isupper(shikhar[i]))
            {
                if(s.find(tolower(shikhar[i]))!=s.end())
                {}
                else{p=i;
                    flag=false;
                     break;
                }
                
            }
            else if(islower(shikhar[i]))
            {
                if(s.find(toupper(shikhar[i]))!=s.end())
                {}
                else{p=i;
                    flag=false;
                     break;
                    }
                
            }
            
        }
        if(!flag)
        {
            string s1= longestNiceSubstring(shikhar.substr(0,p));
            string s2= longestNiceSubstring(shikhar.substr(p+1,shikhar.length()-p));
            if(s1.length()>=s2.length())
                return s1;
            else
                return s2;
            
        }
        return shikhar;
        
        
        
    }
};