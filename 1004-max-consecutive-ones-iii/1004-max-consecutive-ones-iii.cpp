class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int left=0,right=0,n=nums.size(),cnt=0;
        int maxi=0;
        while(right<n){
            if(nums[right]==1){
                mp[nums[right]]++;
                cnt=max(cnt,mp[nums[right]]);
            }
            if(right-left+1-cnt>k){
                if(nums[left]==1){
                    mp[nums[left]]--;
                }
                left++;
            }
            maxi=max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};