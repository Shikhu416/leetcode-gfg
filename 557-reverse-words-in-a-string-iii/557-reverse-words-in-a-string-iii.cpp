class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+cnt,s.begin()+i);
                cnt=i+1;
                //cout<<cnt<<endl;
            }
        }
        s.pop_back();
        return s;
    }
};