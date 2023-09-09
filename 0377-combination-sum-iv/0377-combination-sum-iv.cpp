class Solution {
public:
    int solve(vector<int>& nums,int target,vector<int>&dp,int n){
        if(target<0){return 0;}
        if(target==0){return 1;}
        if(dp[target]!=-1)return dp[target];
        int pick=0;
        for(int i=0;i<n;i++){
            pick+=solve(nums,target-nums[i],dp,n);
        }
        return dp[target]=pick;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>dp(target+1,-1);
        int res=solve(nums,target,dp,n);
        return res;
    }
};