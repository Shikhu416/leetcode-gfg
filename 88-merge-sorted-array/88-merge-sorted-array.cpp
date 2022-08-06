class Solution {
public:
    void merge(vector<int>& v, int m, vector<int>&v2, int n) {
       
        int l=0;
        int  r=0;
        vector<int>shikhar;
        while(l<m&&r<n)
        {
            if(v[l]<=v2[r])
            {
                shikhar.push_back(v[l]);
                l++;
            }
            else
            {
                shikhar.push_back(v2[r]);
                r++;
            }
        }
        while(l<m)
        {
            shikhar.push_back(v[l]);
            l++;
        }
        while(r<n)
        {
            shikhar.push_back(v2[r]);
            r++;
        }
        for(int i=0;i<shikhar.size();i++)
        {
            v[i]=shikhar[i];
        }
        
    }
};