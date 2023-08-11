class Solution {
public:
    int f(int ind,vector<vector<int>>&dp,vector<int>&coins,int amount){
        if(ind<0&&amount>0)return 0;
        if(amount<0)return 0;
        if(ind==0){
            if(amount%coins[0]==0)return 1;
            return 0;
        }
        if(amount==0)return 1;
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        int notpick=f(ind-1,dp,coins,amount);
        int pick=0;
        if(pick<=coins[ind]){
            pick=f(ind,dp,coins,amount-coins[ind]);
        }
        return dp[ind][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=f(n-1,dp,coins,amount);
        return ans;
    }
};