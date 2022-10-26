//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		       vector<int>v(26,0);
		       string s="";
		       vector<char>order;
		       for(int i=0;i<A.length();i++)
		       {
		           if(v[A[i]-'a']==0)
		             order.push_back(A[i]);
		           v[A[i]-'a']++;
		           bool flag=false;
		           for(int j=0;j<order.size();j++)
		           {
		              // cout<<"shikhar";
		               if(v[order[j]-'a']==1)
		                  {
		                      flag=true;
		                      s+=order[j];
		                      break;
		                  }
		           }
		           if(!flag)
		              s+='#';
		       }
		       return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends