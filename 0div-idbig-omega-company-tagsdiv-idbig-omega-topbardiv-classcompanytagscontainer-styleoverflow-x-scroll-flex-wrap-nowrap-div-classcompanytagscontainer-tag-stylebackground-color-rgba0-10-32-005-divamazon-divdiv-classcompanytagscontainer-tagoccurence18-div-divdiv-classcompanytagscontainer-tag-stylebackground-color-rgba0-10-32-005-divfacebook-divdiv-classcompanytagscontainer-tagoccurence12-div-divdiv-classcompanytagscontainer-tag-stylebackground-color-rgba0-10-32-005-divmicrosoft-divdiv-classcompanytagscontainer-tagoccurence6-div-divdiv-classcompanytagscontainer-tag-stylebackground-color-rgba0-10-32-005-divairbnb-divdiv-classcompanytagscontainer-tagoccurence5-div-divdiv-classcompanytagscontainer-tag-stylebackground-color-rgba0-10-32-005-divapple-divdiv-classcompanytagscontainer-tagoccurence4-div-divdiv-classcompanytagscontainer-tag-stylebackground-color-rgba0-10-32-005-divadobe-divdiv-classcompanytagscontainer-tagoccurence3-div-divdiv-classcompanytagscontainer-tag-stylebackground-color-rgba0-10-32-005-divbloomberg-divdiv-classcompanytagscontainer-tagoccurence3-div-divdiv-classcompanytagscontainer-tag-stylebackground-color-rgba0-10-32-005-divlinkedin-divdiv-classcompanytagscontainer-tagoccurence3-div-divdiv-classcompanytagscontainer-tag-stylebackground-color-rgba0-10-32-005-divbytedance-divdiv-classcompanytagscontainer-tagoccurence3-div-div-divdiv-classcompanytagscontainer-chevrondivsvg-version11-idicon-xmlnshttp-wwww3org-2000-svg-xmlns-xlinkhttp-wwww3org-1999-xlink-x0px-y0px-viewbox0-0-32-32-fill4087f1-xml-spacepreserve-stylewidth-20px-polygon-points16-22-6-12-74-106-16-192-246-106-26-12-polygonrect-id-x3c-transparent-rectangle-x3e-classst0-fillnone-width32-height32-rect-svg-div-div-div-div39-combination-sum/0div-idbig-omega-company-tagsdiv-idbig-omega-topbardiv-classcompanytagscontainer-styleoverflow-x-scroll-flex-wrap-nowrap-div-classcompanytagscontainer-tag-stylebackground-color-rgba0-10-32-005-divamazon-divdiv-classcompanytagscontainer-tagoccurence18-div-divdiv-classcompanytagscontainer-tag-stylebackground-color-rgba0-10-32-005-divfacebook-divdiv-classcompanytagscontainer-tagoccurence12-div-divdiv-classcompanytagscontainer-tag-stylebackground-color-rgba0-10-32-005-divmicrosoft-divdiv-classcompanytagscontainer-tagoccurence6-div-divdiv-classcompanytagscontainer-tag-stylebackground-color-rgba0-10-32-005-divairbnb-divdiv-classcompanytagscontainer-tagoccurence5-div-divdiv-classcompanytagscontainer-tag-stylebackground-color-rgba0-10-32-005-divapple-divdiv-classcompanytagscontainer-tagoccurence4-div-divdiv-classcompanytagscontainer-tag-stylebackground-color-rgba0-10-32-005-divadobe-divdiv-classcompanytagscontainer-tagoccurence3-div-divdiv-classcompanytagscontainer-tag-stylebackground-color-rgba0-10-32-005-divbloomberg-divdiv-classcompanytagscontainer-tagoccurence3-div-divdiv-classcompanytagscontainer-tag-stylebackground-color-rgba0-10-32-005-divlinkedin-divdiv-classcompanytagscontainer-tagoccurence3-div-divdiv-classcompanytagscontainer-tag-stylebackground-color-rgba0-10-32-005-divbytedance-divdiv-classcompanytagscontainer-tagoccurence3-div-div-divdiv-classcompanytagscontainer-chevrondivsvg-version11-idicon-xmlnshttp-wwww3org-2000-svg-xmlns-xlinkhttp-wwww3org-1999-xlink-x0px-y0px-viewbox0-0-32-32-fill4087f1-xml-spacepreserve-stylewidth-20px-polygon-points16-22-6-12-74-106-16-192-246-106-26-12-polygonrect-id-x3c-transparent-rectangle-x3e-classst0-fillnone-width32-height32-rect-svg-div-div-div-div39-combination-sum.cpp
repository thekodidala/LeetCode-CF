class Solution {
public:
    
    void func(int ind,int target,vector<int>&temp,vector<int>&arr,vector<vector<int>>&ans){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(arr[ind]<=target){
            temp.push_back(arr[ind]);
            func(ind,target-arr[ind],temp,arr,ans);
            temp.pop_back();
        }
        func(ind+1,target,temp,arr,ans);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        func(0,target,temp,candidates,ans);
        return ans;
    }
};