class Solution {
public:
    void func(int ind,int target,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }   
        for(int i=ind;i<arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            temp.push_back(arr[i]);
            func(i+1,target-arr[i],arr,temp,ans);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>temp;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        func(0,target,candidates,temp,ans);
        return ans;
    }
};