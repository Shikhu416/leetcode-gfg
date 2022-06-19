class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int>mp;
    
        for(int i=0;i<3;i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(int i=3;i<=s.length();i++)
        {for(auto elem:mp)
        {
            cout<<elem.first<<" "<<elem.second<<endl;
           
        }
          cout<<"khtm"<<endl;
            if(mp.size()==3)
                cnt++;
            mp[s[i-3]]--;
            if(mp[s[i-3]]==0)
                mp.erase(s[i-3]);
            mp[s[i]]++;
        }
        return cnt;
    }
};