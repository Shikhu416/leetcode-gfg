class Solution {
public:
    
    int minOperations(vector<int>& v, int x) {
       int sum=accumulate(v.begin(),v.end(),0),ans=-1;
        int target=sum-x,curr=0;
        cout<<sum<<" "<<target;
        
        for(int right=0,left=0;right<v.size();right++)
        {
            curr+=v[right];
            while(curr>target&&left<=right)
              curr-=v[left++];
            if(curr==target)
                ans=max(ans,(right-left+1));
                
        }
        if(ans==-1)
            return -1;
        else
            return v.size()-ans;
        
    }
};