class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        unordered_set<int>s;
        for(int i=0;i<m;i++)
        {bool flag=true;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0){
                    flag=false;
                    s.insert(j);
                    
                }
            }
         if(!flag)
         {
             for(int j=0;j<n;j++)
             {
                 matrix[i][j]=0;
             }
         }
         
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s.find(j)!=s.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};