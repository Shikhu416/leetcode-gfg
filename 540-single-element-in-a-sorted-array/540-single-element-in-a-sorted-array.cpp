class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n=v.size();
        int low=0;
        int high=v.size()-2;
        while(low<=high)
        {
            int mid=(low+(high-low)/2);
            if(mid%2==0)
            {
                if(v[mid+1]!=v[mid])
                 high=mid-1;
              else
                  low=mid+1;
              
            }
            else
            {
                
           
           
                if(v[mid+1]==v[mid])
                    high=mid-1;
                else 
                    low=mid+1;
               
        }
    }
        return v[low];
    }
};