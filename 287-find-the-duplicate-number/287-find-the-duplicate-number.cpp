class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n=v.size()-1;
        sort(v.begin(),v.end());
        int res;
        for(int i=1;i<=n;i++)
        {
           if(v[i]==v[i-1])
           {
               res=v[i];
               break;
           }
        }
        return res;
    }
};