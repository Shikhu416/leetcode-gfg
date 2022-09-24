class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size()-1,shikhar=0;
       int sum=(n*(n+1))/2;
        for(int i=0;i<=n;i++)
        {
            shikhar+=v[i];
        }
        if(shikhar==sum)
            return n+1;
        else
        {
            return n+1-(shikhar-sum);
        }
        
    }
};