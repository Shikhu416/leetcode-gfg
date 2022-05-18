class Solution {
public:
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
        sort(v.begin(),v.end());
        vector<pair<int,int>>shikhar;
        for(int i=0;i<v.size();i++)
        {
            shikhar.push_back({abs(v[i]-x),i});
            
        }
        sort(shikhar.begin(),shikhar.end());
        vector<int>result;
       for(int i=0;i<k;i++)
       {
           result.push_back(v[shikhar[i].second]);
       }
        sort(result.begin(),result.end());
        return result;
        
        
        
    }
};