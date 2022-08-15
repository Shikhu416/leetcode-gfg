class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int temp=0;
       int low=0;
       int high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target)
            {
                temp=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
       // cout<<temp<<endl;
        int n=matrix[0].size();
        int low2=0;int high2=n-1;
        while(low2<=high2)
        {
            int mid2=low2+(high2-low2)/2;
            if(matrix[temp][mid2]==target)
                return true;
            else if(matrix[temp][mid2]<target)
                low2=mid2+1;
             else if(matrix[temp][mid2]>target)
                 high2=mid2-1;
        }
        return false;
           
        
    }
};