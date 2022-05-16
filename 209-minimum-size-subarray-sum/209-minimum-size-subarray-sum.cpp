class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int n=v.size();
        int l=0;
        int sum=0;
        int mini=INT_MAX;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
           sum+=v[i];
            if(sum>=target)
            {mini=min(mini,i-l+1);
                flag=false;
                while(sum>=target&&l<i)
                {
                    sum-=v[l];
                    l++;
                    if(sum>=target)
                        mini=min(mini,i-l+1);
                    
                }
            }
        }
        if(flag)
            return 0;
        else
            return mini;
        
    }
};