class Solution {
public:
    int peakIndexInMountainArray(vector<int>& shikhar) {
      int n=shikhar.size();
        int low=0;
        int high=shikhar.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid==0)
            {
                if(shikhar[mid+1]>shikhar[mid])
                    return mid+1;
                else
                    return mid;
            }
            else if(mid==n-1)
              return mid;
            else
            {
                if(shikhar[mid]>shikhar[mid+1]&&shikhar[mid]>shikhar[mid-1])
                    return mid;
                else if(shikhar[mid]<shikhar[mid-1]&&shikhar[mid]>shikhar[mid+1])
                    high=mid-1;
                 else if(shikhar[mid]>shikhar[mid-1]&&shikhar[mid]<shikhar[mid+1])
                    low=mid+1;
                
            }
            
            
        }
        return -1;
    }
};