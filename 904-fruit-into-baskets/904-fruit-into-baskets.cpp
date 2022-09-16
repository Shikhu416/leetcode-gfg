class Solution {
public:
    int totalFruit(vector<int>& v) {
        int n=v.size();
        int a=-1,b=-1,left=0,right=0,ans=0,type=0,cnta=0,cntb=0;
        while(right<n)
        {
           if(v[right]==a)
               cnta++;
            else if(v[right]==b)
                cntb++;
            else if(a==-1)
            {
                a=v[right];
                cnta++;
                type++;
                
            }
            else if(b==-1)
            {
                b=v[right];
                cntb++;
                type++;
            }
            else
                type++;
            while(type>2)
            {
                //cout<<right<<endl;
                if(v[left]==a)
                    cnta--;
                else if(v[left]==b)
                    cntb--;    
                if(cnta==0){a=v[right];
                            cnta++;
                    type--;
                }
                else if(cntb==0){b=v[right];
                                 cntb++;
                    type--;
                }
                left++;
            }
            ans=max(ans,cnta+cntb);
            right++;
        }
        return ans;
        
    }
};