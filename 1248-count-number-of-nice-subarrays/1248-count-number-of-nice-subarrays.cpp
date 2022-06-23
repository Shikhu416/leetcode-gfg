class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
        int n=v.size();
        int shikhar=0;
        
       int b=0;int a=0,cnt=0;
       while(a<n&&b<n)
       {//bool flag=true;
           if(v[a]%2!=0)
           {
               cnt++;
               if(cnt==k)
               {
                   a++;
                    //flag=false;
                   int temp1=0;
                   while(a<n&&v[a]%2==0)
                   {
                       
                           temp1++;
                           a++;
                      
                       
                    
                   }
                   temp1++;
                   int temp2=0;
                   //cout<<cnt<<" "<<b<<" "<<a;
                   while(cnt==k&&b<a)
                   {
                       if(v[b]%2!=0)
                       {
                           cnt--;
                       }
                       else
                           temp2++;
                      // cout<<"shikhar";
                       b++;
                   }
                   int preach=(temp1)+(temp1*temp2);
                   shikhar+=preach;
                   preach=0;
                   a--;
               }
           }
       
            a++;
           //cout<<a<<" "<<b<<" "<<cnt<<endl;
          // if(flag)
           //a++;
           
       }
        return shikhar;
    }
};