class Solution {
public:
    //sliding window logic
    int longestSubarray(vector<int>& nums) {
        int zero=0,ans=0,left=0,n=nums.size();
        for(int right=0;right<n;right++){
            if(nums[right]==0){zero++;}
            while(zero>1){
                if(nums[left]==0){zero--;}
                left++;
            }
            ans=max(ans,right-left+1-zero);
        }
        return (ans==n)?ans-1:ans;
    }
};