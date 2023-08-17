//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	string minimum_Number(string s){
   	    // Code here
   	    string t="";
   	    sort(s.begin(),s.end());
   	    for(auto i:s){
   	        if(i=='0')t+=i;
   	        else
   	            break;
   	    }
   	    s=s.substr(t.size());
   	    if(s.size())
   	        s=s[0]+t+s.substr(1);
   	    else s=s+t;
   	    return s;
   	}    
};
/*sort(s.begin(), s.end());
   		string t = "";
   		for(auto i : s){
   			if(i == '0')t+=i;
   			else break;
   		}
   		s = s.substr(t.size());
   		if(s.size())
   			s = s[0] + t + s.substr(1);
   		else s = s + t;
   		return s;*/

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		string ans = ob.minimum_Number(s);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends