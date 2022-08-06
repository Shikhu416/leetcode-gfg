class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>shikhar;
        sort(v.begin(),v.end());
         int mini=v[0][0];
         int maxi=v[0][1];
        for(int i=1;i<v.size();i++)
        {
           if(v[i][0]<=maxi)
           {
               maxi=max(maxi,v[i][1]);
           }
            else
            {
                shikhar.push_back({mini,maxi});
                mini=v[i][0];
                maxi=v[i][1];
            }
            
        }
        shikhar.push_back({mini,maxi});
        return shikhar;
        
    }
};