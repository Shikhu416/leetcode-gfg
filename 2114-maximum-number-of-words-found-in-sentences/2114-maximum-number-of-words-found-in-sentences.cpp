class Solution {
public:
    int mostWordsFound(vector<string>& v) {
        int maxi=INT_MIN;
        for(int  i=0;i<v.size();i++)
        {
            istringstream shikhar(v[i]);
            int cnt=0;
            while(shikhar)
            {
                string word;
                shikhar>>word;
                cnt++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi-1;
        
        
    }
};