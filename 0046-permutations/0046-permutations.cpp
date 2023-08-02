class Solution {
public:
        void solve(int n,vector<int> nums,vector<vector<int>>&v,vector<int>&ans,vector<bool>&check){
        if(ans.size()==n){
            v.push_back(ans);
        }
        for(int i=0;i<n;i++){
            if(!check[i]){
                ans.push_back(nums[i]);
                check[i]=1;
                solve(n,nums,v,ans,check);
                check[i]=0;
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ans;
        int n=nums.size();
        vector<bool>check(n,0);
        //for(int i=0;i<n;i++){check[i]=0;}
        solve(n,nums,v,ans,check);
        return v;
    }
};