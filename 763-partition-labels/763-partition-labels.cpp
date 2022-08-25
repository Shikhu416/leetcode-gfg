class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        pair<int,int>p{INT_MAX,INT_MIN};
        map<char,pair<int,int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=p;
        }
       
      for(int i=0;i<n;i++)
      {
          if(i<mp[s[i]].first){
              mp[s[i]].first=i;
               mp[s[i]].second=i;}
          else
              mp[s[i]].second=i;
      }
        int cnt=0;
        vector<int>v;
        int i=0,j=0;
        int start=0;
        while(j<n&&i<n)
        {  start=i;
            j=mp[s[i]].second;
            while(i<j)
            {
                i++;
                if(j<mp[s[i]].second)
                    j=mp[s[i]].second;      
                
            }
         v.push_back(i-start+1);
         i++; 
       
        }
        return v;
    }
};