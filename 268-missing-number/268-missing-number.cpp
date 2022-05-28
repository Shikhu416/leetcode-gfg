class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=i)
            {
                flag=false;
                return i;
                break;
            }
        }
        
            return n;
        
    }
};