class Solution {
public:
    int possible(int ind,vector<vector<int>>&dp,vector<int>&coins,int amount){
        if(ind==0){
            if(amount%coins[0]==0)return amount/coins[0];
            return 1e9;
        }
        if(amount==0)return 0;
        if(dp[ind][amount]!=-1){return dp[ind][amount];}
        int notpick=possible(ind-1,dp,coins,amount);
        int pick=1e9;
        if(coins[ind]<=amount){
            pick=1+possible(ind,dp,coins,amount-coins[ind]);
        }
        return dp[ind][amount]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=possible(n-1,dp,coins,amount);
        if(ans>=1e9)return -1;
        return ans;
    }
};