class Solution {
public:
    //here we can choose element as 1st,2nd,3rd,4th.. so for loop used inside
    void solve(int ind,int k,vector<int>nums,vector<int>&temp,vector<vector<int>>&res){
        if(k==0){
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])continue;
            if(nums[i]>k)break;
            temp.push_back(nums[i]);
            solve(i+1,k-nums[i],nums,temp,res);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        //it is sorted to print unique elements and to check nums[i]==nums[i-1] if it is then continue
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>ans;
        solve(0,target,candidates,ans,res);
        
        return res;
    }
};