class Solution {
public:
    int divisorSubstrings(int num, int k) {
       string shikhar=to_string(num);
        int n=shikhar.length();
        int cnt=0;
        for(int i=0;i+k<=n;i++)
        {
            string temp=shikhar.substr(i,k);
            if(stoi(temp)!=0){
            if(num%stoi(temp)==0)
                cnt++;
            }
            
        }
        return cnt;
        
        
        
        
        
    }
};