class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=="X++"||v[i]=="++X")
                cnt1++;
            else
                cnt2++;
        }
        return cnt1-cnt2;
        
    }
};