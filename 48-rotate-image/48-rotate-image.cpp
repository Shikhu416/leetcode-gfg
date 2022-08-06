class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n=v.size()-1;
        for(int j=0;j<=((v[0].size()-1)/2);j++)
        {
            int row=j;
            int col=j;
            for(int i=j;i<n-j;i++)
            {
                int a=v[row][i];
                int b=v[i][n-col];
                int c=v[n-row][n-i];
                int d=v[n-i][col];
                v[row][i]=d;
                v[i][n-col]=a;
                v[n-row][n-i]=b;
                v[n-i][col]=c;
                
            }
            
        }
        
    }
};