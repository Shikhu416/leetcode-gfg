class Solution {
public:
 vector<vector<string>>shiv;
     bool check(string s,int start,int end)
    {
        int i=start;
        int j=end;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }   
    void func(int index,string s,vector<string>&path)
    {
         
    if (index == s.size()) {
      shiv.push_back(path);
      return;
    }
    for (int i = index; i < s.size(); ++i) {
      if (check(s, index, i)) {
        path.push_back(s.substr(index, i - index + 1));
        func(i + 1, s, path);
        path.pop_back();
      }
    }
  }
   
    
   
    vector<vector<string>> partition(string s) {
         vector < string > path;
     func(0,s,path);
        return shiv;
    }
};