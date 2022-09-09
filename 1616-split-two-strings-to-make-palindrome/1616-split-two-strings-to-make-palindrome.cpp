class Solution {
public:
    bool solve(string s)
    {
        int n=s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
                return false; 
        }
        return true;
    }
    bool checkPalindromeFormation(string a, string b) {
        int n=a.length()-1;
        if(solve(a)||solve(b))
            return true;
        else
        {
            int i=0,j=n;
            while(i<=j)
            {
                if(a[i]==b[j])
                {//cout<<i<<" "<<j<<endl;
                    if(i==(j-1)||(i==j))
                        return true;
                    i++;
                    j--;
                }
                else
                {
                    if(solve(b.substr(i,j-i+1))||solve(a.substr(i,j-i+1)))
                        return true;
                    else
                        break;
                }
            }
              i=0;
            j=n;
            while(i<=j)
            {
                 if(b[i]==a[j])
                {//cout<<i<<" "<<j<<endl;
                    if(i==(j-1)||(i==j))
                        return true;
                    i++;
                    j--;
                }
                
                else
                {//cout<<a.substr(i,(j-i+1));
                    if(solve(a.substr(i,j-i+1))||solve(b.substr(i,j-i+1)))
                        return true;
                    else
                        break;
                }
            }
        }
        return false;
        
    }
};