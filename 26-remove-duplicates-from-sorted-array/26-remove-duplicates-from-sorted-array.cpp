class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int slow=0,fast=0;
       while(fast<v.size())
       {
           if(v[fast]!=v[slow])
           {
               slow++;
               v[slow]=v[fast];
           }
           fast++;
       }
        return slow+1;
    }
};