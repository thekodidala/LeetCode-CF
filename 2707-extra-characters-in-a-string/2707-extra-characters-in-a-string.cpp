class Solution {
public:
    
    int f(int ind,vector<int>&dp,string &s,unordered_map<string,int> &mp){
        int n=s.length();
        if(ind>=n)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int ans=n;
        string k="";
        for(int i=ind;i<n;i++){
            k+=s[i];
            int cnt;
            if(mp[k]){
                cnt=f(i+1,dp,s,mp);
            }
            else{
                cnt=k.size()+f(i+1,dp,s,mp);
            }
            ans=min(ans,cnt);
            
        }
        return dp[ind]=ans;
    } 
    int minExtraChar(string s, vector<string>& dict) {
        int n=s.length();
        unordered_map<string,int>mp;
        for(auto a:dict){mp[a]++;}
        vector<int>dp(n+1,-1);
        int cnt=f(0,dp,s,mp);
        return cnt;
    }
};