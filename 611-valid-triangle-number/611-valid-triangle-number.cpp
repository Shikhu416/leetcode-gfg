class Solution {
public:
    int triangleNumber(vector<int>& v) {
      sort(v.begin(),v.end());
        int n=v.size(),cnt=0;
       for(int i=n-1;i>=2;i--)
       {
           int low=0,shikhar=i-1;
           while(low<shikhar)
           {
               if(v[low]+v[shikhar]>v[i])
               {
                   cnt+=(shikhar-low);
                    shikhar--;
               }
               else
                   low++;
           }
       }
        return cnt;
    
        
    }
};