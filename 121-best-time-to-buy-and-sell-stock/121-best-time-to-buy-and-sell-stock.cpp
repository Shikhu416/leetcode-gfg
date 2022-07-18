class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        vector<int>left(n);
        vector<int>right(n);
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for(int i=0;i<v.size();i++)
        {
            mini=min(mini,v[i]);
            left[i]=mini;
        }
        for(int i=n-1;i>=0;i--)
        {
            maxi=max(maxi,v[i]);
            right[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {          ans=max((right[i]-left[i]),ans);
            
        }
        return ans;
        
        
        
        
        
        
    }
};