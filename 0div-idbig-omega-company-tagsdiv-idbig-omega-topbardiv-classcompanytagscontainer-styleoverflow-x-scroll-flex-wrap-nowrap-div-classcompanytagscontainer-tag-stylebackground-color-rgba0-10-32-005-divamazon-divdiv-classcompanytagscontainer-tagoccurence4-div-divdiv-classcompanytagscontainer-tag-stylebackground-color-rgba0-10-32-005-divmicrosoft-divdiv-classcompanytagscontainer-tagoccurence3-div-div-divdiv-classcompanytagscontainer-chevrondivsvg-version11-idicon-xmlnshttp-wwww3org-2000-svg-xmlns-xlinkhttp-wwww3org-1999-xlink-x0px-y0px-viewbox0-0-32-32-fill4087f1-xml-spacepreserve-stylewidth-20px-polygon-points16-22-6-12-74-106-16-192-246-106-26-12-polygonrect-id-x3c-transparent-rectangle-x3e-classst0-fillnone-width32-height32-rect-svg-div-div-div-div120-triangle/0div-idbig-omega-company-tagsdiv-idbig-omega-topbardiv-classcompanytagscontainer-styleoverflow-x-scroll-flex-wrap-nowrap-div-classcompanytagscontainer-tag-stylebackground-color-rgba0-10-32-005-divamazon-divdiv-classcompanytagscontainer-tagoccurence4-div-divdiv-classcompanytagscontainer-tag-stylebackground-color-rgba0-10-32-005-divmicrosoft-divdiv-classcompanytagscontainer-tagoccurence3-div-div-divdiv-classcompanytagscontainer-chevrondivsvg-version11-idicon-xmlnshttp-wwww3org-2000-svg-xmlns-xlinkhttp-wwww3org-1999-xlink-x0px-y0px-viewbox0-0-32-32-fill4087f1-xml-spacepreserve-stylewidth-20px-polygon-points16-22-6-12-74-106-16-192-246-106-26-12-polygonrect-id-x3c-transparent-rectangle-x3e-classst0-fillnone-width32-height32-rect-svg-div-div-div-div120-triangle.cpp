class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&dp,int n,vector<vector<int>>& nums){
        if(i==n||j>i+1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int pick=nums[i][j]+solve(i+1,j,dp,n,nums);
        int notpick=nums[i][j]+solve(i+1,j+1,dp,n,nums);
        return dp[i][j]=min(pick,notpick);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int res=solve(0,0,dp,n,triangle);
        return res;
    }
};