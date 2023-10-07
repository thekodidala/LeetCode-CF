class Solution {
public:
    void solve(int i,int n,int sum,vector<int>&nums,vector<int>&temp,vector<vector<int>>&res){
        if(i>=n){
             if(sum==0){
                 res.push_back(temp);
                 
             }
            return;
        }
        if(nums[i]<=sum){
            temp.push_back(nums[i]);
            solve(i,n,sum-nums[i],nums,temp,res);
            temp.pop_back();
        }
        solve(i+1,n,sum,nums,temp,res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>res;
        vector<int>temp;
        solve(0,n,target,candidates,temp,res);
        return res;
    }
};