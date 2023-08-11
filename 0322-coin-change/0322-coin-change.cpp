class Solution {
public:
    /*int possible(int ind,vector<vector<int>>&dp,vector<int>&coins,int amount){
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
    }*/
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0)dp[0][i]=i/coins[0];
            else dp[0][i]=1e9;
        }
        for(int i=1;i<n;i++){
            for(int a=0;a<=amount;a++){
                int notpick=dp[i-1][a];
                int pick=1e9;
                if(coins[i]<=a){
                    pick=1+dp[i][a-coins[i]];
                }
                dp[i][a]=min(pick,notpick);
            }
        }
        return (dp[n-1][amount]>=1e9)?-1:dp[n-1][amount];
    }
};