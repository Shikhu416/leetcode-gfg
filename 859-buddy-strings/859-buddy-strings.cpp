class Solution {
public:
    bool buddyStrings(string s, string goal) {
        map<int,int>mp;
        if(s.size()!=goal.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        auto it=mp.begin();
        bool flag=false;
        while(it!=mp.end())
        {
            if(it->second>=2)
            {
               flag=true;
                break;
            }
            it++;
        }
        if(s==goal&&flag)
            return true;
        else
        {
           int cnt=0;
            vector<char>v;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=goal[i])
                {
                    cnt++;
                    v.push_back(s[i]);
                    v.push_back(goal[i]);
                    
                }
                
            }
            if(cnt==2&&v[0]==v[3]&&v[1]==v[2])
                return true;
            else
                return false;
        }
        
    }
};