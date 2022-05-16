class Solution {
public:
    vector<int> avoidFlood(vector<int>& v) {
        int n=v.size();
        int cnt=0;
       map<int,int>shikhar;
        map<int,int>index;
        vector<int>ans(n,0);
       set<int>s;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int k=v[i];
            if(k==0){
                cnt++;
               s.insert(i);
                
            }
            else
            {
                if(shikhar[k]==0){
                    shikhar[k]=1;
                    ans[i]=-1;
                    index[k]=i;
                }
                else
                {
                    if(cnt>0)
                    {   auto it=s.lower_bound(index[k]);
                     if(it==s.end())
                     {
                         flag=false;
                         break;
                     }
                     else
                     {
                         ans[*it]=k;
                         s.erase(it);
                         index[k]=i;
                         ans[i]=-1;
                         
                         
                     }
                        
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                    
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)
                ans[i]=shikhar.begin()->first;
        }
        vector<int>shik{};
        if(!flag)
            return shik;
        else
            return ans;
        
    }
};