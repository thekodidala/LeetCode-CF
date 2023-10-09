class Solution {
public:
    int solve(int i,int n,vector<int>&nums,int sum,int ans){
        if(i==n){
            ans+=sum;
            return ans;
        }
        int a=solve(i+1,n,nums,sum^nums[i],ans);
        
        int j=solve(i+1,n,nums,sum,ans);
        
        return a+j;
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int res=solve(0,n,nums,0,0);
        return res;
    }
};