class Solution {
public:
    int minimumDifference(vector<int>& v, int k) {
        sort(v.begin(),v.end(),greater<int>());
      int res=INT_MAX;
        for(int i=0;i+k<=v.size();i++)
        {
            res=min(res,v[i]-v[i+k-1]);
        }
        return res;
        
    }
};