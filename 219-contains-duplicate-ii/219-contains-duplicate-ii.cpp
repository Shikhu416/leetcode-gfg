class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        map<int,int>mp;
        int res;
        for(int i=0;i<v.size();i++)
        {
            if(mp[v[i]]==0)
                mp[v[i]]=i+1;
            else
            {//cout<<"shikhar";
                res=(i+1-mp[v[i]]);
                
                mp[v[i]]=i+1;
                if(res<=k)
                    return true;
            }
        }
        //for(auto elem:mp)
        //    cout<<elem.first<<" "<<elem.second<<endl;
        return false;   
    }
};