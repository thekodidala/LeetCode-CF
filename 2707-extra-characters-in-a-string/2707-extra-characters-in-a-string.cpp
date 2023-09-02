class Solution {
public:
    map<string,int>mp;
    int f(int ind,vector<int>&dp,string &s){
        int n=s.length();
        if(ind>=n)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int ans=INT_MAX;
        ans=1+f(ind+1,dp,s);
        string k="";
        for(int i=ind;i<n;i++){
            k+=s[i];
            if(mp[k]){
                ans=min(ans,f(i+1,dp,s));
            }
        }
        return dp[ind]=ans;
    } 
    int minExtraChar(string s, vector<string>& dict) {
        int n=s.length();
        for(auto a:dict){mp[a]++;}
        vector<int>dp(n+1,-1);
        int cnt=f(0,dp,s);
        return cnt;
    }
};