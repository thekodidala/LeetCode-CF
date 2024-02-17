class Solution {
public:
    void func(int ind,vector<int>&nums,vector<vector<int>>&res,vector<int>temp){
        res.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            func(i+1,nums,res,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        func(0,nums,res,temp);
        return res;
    }
};