class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int mx=2,n=nums.size();
        vector<vector<int>>dp(n,vector<int>(1100,0));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=nums[j]-nums[i]+500;
                dp[j][d]=max(2,dp[i][d]+1);
                mx=max(mx,dp[j][d]);
            }
        }
        return mx;
    }
};