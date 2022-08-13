class Solution {
public:
    int uniquePaths(int m, int n) {
    double res=1;
        int r=m+n-2;
        for(int i=0;i<n-1;i++)
        {//cout<<res<<" "<<r-i<<" "<<n-1-i<<endl;
            res=res*(r-i)/(n-1-i);
         //cout<<res<<" "<<r-i<<" "<<n-1-i<<endl;
        }
      // long long int res2=1;
      //  for(int i=0;i<n-1;i++)
      //  {
      //      res2*=n-1-i;
      //  }
        cout<<res<<endl;
        if(res> int(res)+0.5){
            return ceil(res);
        }
       return int(res);
    }
    
};