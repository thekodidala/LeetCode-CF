class Solution {
public:
        void solve(int ind,int n,vector<int> nums,vector<vector<int>>&v){
        if(ind==n){
            v.push_back(nums);
        }
        else{
            
            for(int j=ind;j<n;j++){
                //ans.push_back(nums[i]);
                swap(nums[ind],nums[j]);
                solve(ind+1,n,nums,v);
            }
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        solve(0,n,nums,v);
        return v;
    }
};