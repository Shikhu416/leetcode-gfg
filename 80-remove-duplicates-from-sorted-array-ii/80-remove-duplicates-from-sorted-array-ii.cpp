class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int l=0,n=v.size();
        int r=0,cnt=0;
        int temp;
        while(r<v.size()){
        while(r<n&&v[r]==v[l])
        {
            r++;
        }
        if((r-l)>1){
            cnt+=2;
            temp=2;}
       else{
           cnt+=1;
           temp=1;
       }
        for(int i=cnt-temp;i<cnt;i++)
        {
            v[i]=v[l];
        }
            
        l=r;    
        }
       // cout<<cnt;
        return cnt;
    }
};