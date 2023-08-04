class Solution {
public:
    void solve(int ind,vector<int>ans,vector<vector<int>>&res,vector<int>&nums){
        if(ind<0){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[ind]);
        solve(ind-1,ans,res,nums);
        ans.pop_back();
        solve(ind-1,ans,res,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        if(nums.size()==0)return res;
        int n=nums.size();
        solve(n-1,ans,res,nums);
        return res;
    }
};