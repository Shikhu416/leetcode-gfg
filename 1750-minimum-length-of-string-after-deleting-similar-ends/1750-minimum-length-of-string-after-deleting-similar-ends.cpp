class Solution {
public:
    int minimumLength(string s) {
        int left=0,right=s.length()-1;
        while(left<right&&s[left]==s[right])
        {
            char shikhar=s[left];
            while(left<=right&&s[left]==shikhar)
                left++;
            while(right>=left&&s[right]==shikhar)
                right--;
        }
        if(left>right)return 0;
        else
            return right-left+1;
    }
};