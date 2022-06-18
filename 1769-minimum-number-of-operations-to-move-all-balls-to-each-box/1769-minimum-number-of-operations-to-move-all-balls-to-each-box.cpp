class Solution {
public:
    vector<int> minOperations(string s) {
        int cntr=0;
        int cntl=0;
        int rval=0;
        int lval=0;
        cntr=count(s.begin(),s.end(),'1');
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                rval+=(i-0);
        }
        vector<int>shikhar;
        for(int i=0;i<s.length();i++)
        {
            shikhar.push_back(rval+lval);
            if(s[i]=='1')
            {
                cntr--;
                cntl++;
            }
            lval+=cntl;
            rval-=cntr;
            
        }
        return shikhar;
        
    }
};