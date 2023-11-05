class Solution {
public:
    int solve(int i,int n,string s,vector<int>&dp){
        if(i>=n){
            return 1;
        }
        if(i<n && s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        int total=solve(i+1,n,s,dp);
        int k=0;
        if((i+1<n) && ((s[i]=='1' && s[i+1]<='9')||(s[i]=='2' && s[i+1]<='6'))){
            k=solve(i+2,n,s,dp);
        }
        return dp[i]=total+k;
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n,-1);
        return solve(0,n,s,dp);
    }
};