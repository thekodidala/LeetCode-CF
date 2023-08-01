class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalsum=0,n=nums.size();
        for(int i=0;i<n;i++){totalsum+=nums[i];}
        if(totalsum%2)return false;
        int target=totalsum/2;
        vector<vector<bool>>dp(n,vector<bool>(target+1,0));
        
        for(int i=0;i<n;i++)dp[i][0]=true;
        if(nums[0]<=target)dp[0][nums[0]]=true;
        
        for(int ind=1;ind<n;ind++){
            for(int tar=1;tar<=target;tar++){
                bool nottake=dp[ind-1][tar];
                bool take=false;
                if(tar>=nums[ind]){
                    take=dp[ind-1][tar-nums[ind]];
                }
                dp[ind][tar]=nottake||take;
            }
        }
        return dp[n-1][target];
    }
};