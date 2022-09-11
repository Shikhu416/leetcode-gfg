class Solution {
public:
    int maxArea(vector<int>& s) {
         int n=s.size();
       int l=0,r=n-1,left=0;     
        int ans=INT_MIN;
        while(l<r)
        {
            while(s[r]<s[l]&&r>l)
            {//cout<<s[l]<<" "<<s[r]<<endl;
                ans=max(ans,((r-l)*(min(s[l],s[r]))));
                r--;
            }
            ans=max(ans,((r-l)*min(s[l],s[r])));
            while(s[l]<=s[left]&&l<r)
            {
                l++;
            }
            left=l;
        }
        return ans;
        
    } 
};