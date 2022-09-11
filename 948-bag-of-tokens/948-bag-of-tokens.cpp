class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       
        sort(tokens.begin(),tokens.end());
       int left=0,right=tokens.size()-1,n=right,ans=0;
        if(tokens.size()==0)return 0;
        if(power<tokens[0])return 0;
            while(left<=right)
            {
                while(left<=right&&power>=tokens[left])
                {//cout<<tokens[left]<<endl;
                    power-=tokens[left];
                    left++;
                    ans++;
                }
                if(right<left||(right==left&&power<tokens[left]))
                    break;
                else
                {
                    power+=tokens[right];
                    right--;
                    ans--;
                }
                //cout<<left<<" "<<right;
                
            
        }
        return ans;
        
    }
};