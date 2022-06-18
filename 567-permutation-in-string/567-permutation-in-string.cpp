class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;
        //cout<<"shikhar"<<endl;
         map<char,int>mps;
        int  n1=s1.length();
          int  n2=s2.length();
        if(n1>n2)
            return false;
        for(int i=0;i<n1;i++)
        {
            mp[s1[i]]++;
        }
        for(int i=0;i<n1;i++)
        {
            mps[s2[i]]++;
        }
        for(int i=0;i+n1<=n2;i++)
        {//cout<<"shikhar";
           // for(auto elem:mps)
           // {
           //     cout<<elem.first<<" "<<elem.second<<endl;
           // }
            if(mps==mp)
                return true;
            mps[s2[i]]--;
            if(mps[s2[i]]==0)
                mps.erase(s2[i]);
            if(i+n1<n2)
                mps[s2[i+n1]]++;
            else
                return false;
        }
        return false;
        
    }
};