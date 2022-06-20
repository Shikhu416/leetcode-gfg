class Solution {
public:
    int numOfSubarrays(vector<int>&v, int k, int threshold)
    {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
        }
        int cnt=0;
        for(int i=k;i<v.size();i++)
        {cout<<sum<<endl;
            if(sum/k>=threshold)
                cnt++;
            sum+=(v[i]-v[i-k]);
        }
        if(sum/k>=threshold)
            cnt++;
        return cnt;
        
    }
};