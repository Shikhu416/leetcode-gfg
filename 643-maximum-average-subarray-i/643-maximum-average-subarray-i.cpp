class Solution {
public:
    double findMaxAverage(vector<int>& v, double k) {
       double shikhar=INT_MIN;
       double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
        }
        shikhar=max(shikhar,sum/k);
        for(int i=k;i<v.size();i++)
        {
            sum+=(v[i]-v[i-k]);
            shikhar=max(shikhar,sum/k);
        }
        return shikhar;
        
    }
};