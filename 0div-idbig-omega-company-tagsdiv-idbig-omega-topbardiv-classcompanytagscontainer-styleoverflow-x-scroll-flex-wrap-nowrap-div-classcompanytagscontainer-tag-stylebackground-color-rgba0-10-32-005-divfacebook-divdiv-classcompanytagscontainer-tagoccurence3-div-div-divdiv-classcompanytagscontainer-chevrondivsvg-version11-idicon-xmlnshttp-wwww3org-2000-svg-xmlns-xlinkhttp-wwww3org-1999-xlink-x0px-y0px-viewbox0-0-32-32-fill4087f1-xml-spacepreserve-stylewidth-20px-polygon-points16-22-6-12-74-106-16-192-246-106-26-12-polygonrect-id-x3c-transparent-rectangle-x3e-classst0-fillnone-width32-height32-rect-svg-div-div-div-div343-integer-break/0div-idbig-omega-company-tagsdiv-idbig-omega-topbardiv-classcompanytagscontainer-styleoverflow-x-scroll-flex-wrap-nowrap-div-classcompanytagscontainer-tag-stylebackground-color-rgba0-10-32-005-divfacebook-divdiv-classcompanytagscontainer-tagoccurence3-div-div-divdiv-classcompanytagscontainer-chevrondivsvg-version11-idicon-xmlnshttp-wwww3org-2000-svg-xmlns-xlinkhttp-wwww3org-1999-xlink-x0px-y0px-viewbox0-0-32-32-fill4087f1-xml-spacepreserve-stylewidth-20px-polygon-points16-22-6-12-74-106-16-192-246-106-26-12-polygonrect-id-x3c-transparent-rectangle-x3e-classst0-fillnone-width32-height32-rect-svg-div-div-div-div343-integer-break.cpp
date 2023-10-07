class Solution {
public:
    int fun(int n,vector<int>&dp){
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        if(n==3)return 2;
        if(dp[n]!=-1){
            return dp[n];
        }
        int ans=n;
        for(int j=1;j<=n;j++){
            int product=max(j*fun(n-j,dp),j*(n-j));
            ans=max(ans,product);
        }
        return dp[n]=ans;
    }
    int integerBreak(int n) {
        vector<int>dp(n+1,-1);
        int ans=fun(n,dp);
        return ans;
    }
};