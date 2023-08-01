class Solution {
public:
    bool equalsum(int ind,vector<int>&nums,vector<vector<int>>&dp,int target){
        if(target==0)return true;
        if(ind==0)return (target==nums[0]);
        if(dp[ind][target]!=-1)return dp[ind][target];
        
        bool nottake=equalsum(ind-1,nums,dp,target);
        bool take=false;
        if(target>=nums[ind]){
            take=equalsum(ind-1,nums,dp,target-nums[ind]);
        }
        return dp[ind][target]=nottake||take;
    }
    
    bool canPartition(vector<int>& nums) {
        int totalsum=0,n=nums.size();
        for(int i=0;i<n;i++){totalsum+=nums[i];}
        int target=totalsum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        if(totalsum%2)return false;
        return equalsum(n-1,nums,dp,target);
    }
};