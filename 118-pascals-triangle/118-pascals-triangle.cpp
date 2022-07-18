class Solution {
public:
    vector<vector<int>> generate(int s) {
        vector<vector<int>>v;
        for(int i=0;i<s;i++)
        {
            vector<int>temp(i+1,0);
            if(i==0)
            {
                temp[i]=1;
            }
         else if(i==1)
         {
             temp[0]=1;
             temp[i]=1;
         }
         else
         {
             temp[0]=1;
             temp[i]=1;
            for(int j=1;j<i;j++)
            {
                temp[j]=v[i-1][j-1]+v[i-1][j];
            }
                
         }
            v.push_back(temp);
        }
        return v;
        
    }
};