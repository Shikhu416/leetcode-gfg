class Solution {
public:
    
    
    string minWindow(string s, string t) {
        int n1=t.length();
        int n2=s.length();
        map<char,int>mp;
        map<char,int>mps;
        int j=0;
        for(int i=0;i<n1;i++)
        {
            mp[t[i]]++;
        }
        int shikhar=0;
        string res="";
        int p=INT_MAX;
        string comp="";
        for(int i=0;i<n2;i++)
        {int k=s[i];
         mps[k]++;
            if(mp[k]>0&&(mps[k]<=mp[k]))
            {
                shikhar++;
            }
                if(shikhar==n1)
                {   
                    res=s.substr(j,i-j+1);
                    
                    if(p>=i-j+1)
                    {
                        p=min(p,i-j+1);
                        comp=res;
                        cout<<comp<<endl;
                    }
                    while(shikhar==n1&&j<i)
                    {int l=s[j];
                        if(mp[l]>0)
                        {
                            if(mps[l]>mp[l])
                            {
                                mps[l]--;
                                j++;
                                 res=s.substr(j,i-j+1);
                                 if(p>=i-j+1)
                                        {
                                            p=min(p,i-j+1);
                                            comp=res;
                                                          cout<<comp<<endl;
                                        }
                            }
                            else
                            {
                                mps[l]--;
                                shikhar--;
                                j++;
                            }
                        }
                     else{
                          j++;
                          res=s.substr(j,i-j+1);
                          if(p>i-j+1)
                    {
                        p=min(p,i-j+1);
                        comp=res;
                               cout<<comp<<endl;
                    }
                         
                     }
                    }
                }
            
        // mps[k]++;
        }
        return comp;
        
        
    }
};