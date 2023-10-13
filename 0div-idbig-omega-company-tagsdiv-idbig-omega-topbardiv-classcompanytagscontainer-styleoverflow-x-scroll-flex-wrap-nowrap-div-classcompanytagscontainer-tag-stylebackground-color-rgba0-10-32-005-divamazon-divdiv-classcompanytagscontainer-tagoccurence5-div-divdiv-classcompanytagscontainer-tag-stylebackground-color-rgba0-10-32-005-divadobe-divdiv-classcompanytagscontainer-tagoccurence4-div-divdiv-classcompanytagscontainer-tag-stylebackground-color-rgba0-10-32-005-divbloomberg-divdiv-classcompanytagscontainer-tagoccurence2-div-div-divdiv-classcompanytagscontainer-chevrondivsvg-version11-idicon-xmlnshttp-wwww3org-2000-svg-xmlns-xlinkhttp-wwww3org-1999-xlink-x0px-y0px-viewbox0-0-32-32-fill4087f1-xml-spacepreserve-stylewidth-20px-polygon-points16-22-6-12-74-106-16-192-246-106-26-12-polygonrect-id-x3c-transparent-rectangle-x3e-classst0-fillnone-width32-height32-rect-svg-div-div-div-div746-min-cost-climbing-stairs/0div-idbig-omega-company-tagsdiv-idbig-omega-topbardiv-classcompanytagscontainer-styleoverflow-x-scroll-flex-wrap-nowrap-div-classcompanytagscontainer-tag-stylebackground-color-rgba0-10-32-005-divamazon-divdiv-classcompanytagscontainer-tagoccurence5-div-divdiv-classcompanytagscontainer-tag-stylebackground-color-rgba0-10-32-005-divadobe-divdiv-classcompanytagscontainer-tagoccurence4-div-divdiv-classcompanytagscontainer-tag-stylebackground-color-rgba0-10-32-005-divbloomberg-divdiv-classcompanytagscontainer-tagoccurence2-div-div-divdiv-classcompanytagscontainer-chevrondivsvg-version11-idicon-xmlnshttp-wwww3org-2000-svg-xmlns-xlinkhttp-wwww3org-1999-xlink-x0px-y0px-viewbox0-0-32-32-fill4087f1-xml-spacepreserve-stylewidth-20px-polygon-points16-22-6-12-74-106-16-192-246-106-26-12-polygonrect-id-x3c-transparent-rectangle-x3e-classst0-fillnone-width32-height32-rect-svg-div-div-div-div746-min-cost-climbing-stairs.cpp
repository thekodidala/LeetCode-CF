class Solution {
public:
    int solve(int ind,int n,vector<int>& cost,vector<int>&dp){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int a=cost[ind]+solve(ind+1,n,cost,dp);
        int b=cost[ind]+solve(ind+2,n,cost,dp);
        return dp[ind]=min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int a=solve(0,n,cost,dp);
        int b=solve(1,n,cost,dp);
        return min(a,b);
    }
};