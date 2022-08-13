class Solution {
public:
    double solve(double x,long n)
    {
        if(n==0)
            return 1;
        else
        {
            if(n%2==0)
            {
                x=x*x;
                return solve(x,n/2);
                
            }
            else
               return x*solve(x,n-1);
        }
    }
    double myPow(double x, int n) {
      int z=n;
        long no=abs(n);
       double q=solve(x,no);
        if(z<0)
            return (double)1.0/q;
        else
            return q;
        
    }
};