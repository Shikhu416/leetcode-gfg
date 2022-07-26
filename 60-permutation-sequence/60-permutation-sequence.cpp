class Solution {
public:
    string getPermutation(int n,int k) {
           vector<int>shikhar;
         int res=1;
        for(int i=1;i<n;i++)
        {
           res*=i;
            shikhar.push_back(i);
        }
        k-=1;
        shikhar.push_back(n);
        string ans="";
      while(true)
      {
          ans+=to_string(shikhar[k/res]);
          shikhar.erase(shikhar.begin()+k/res);
          if(shikhar.empty())
              break;
          k%=res;
          res/=shikhar.size();
          
      }
        return ans;
        
    }
};