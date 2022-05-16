class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(), sat.end());
        
        int inx, sum = 0;
        for(inx = sat.size()-1; inx >= 0; inx--) {
            sum += sat[inx];
            if(sum < 0)
                break;
        }
        
        inx++;
        int t = 1, ans = 0;
        for(int j = inx; j < sat.size(); j++) {
            ans += t * sat[j];
            t += 1;
        }
        
        return ans;
    }
};