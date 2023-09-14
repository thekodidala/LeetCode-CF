class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,n=nums.size();
        int cnt=0,maxi=0;
        while(right<n){
            if(nums[right]==0){
                cnt++;
            }
            while(cnt>k){
                if(nums[left]==0){
                    cnt--;
                }
                left++;
            }
            
            maxi=max(right-left+1,maxi);
            right++;
        }
        return maxi;
    }
};