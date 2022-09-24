class Solution {
public:
    
    bool check(vector<int>& v) {
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[(i+1)%n]<v[i])
                ans++;
        }
        if(ans==0||ans==1)
            return true;
        else
            return false;
        
    }
};