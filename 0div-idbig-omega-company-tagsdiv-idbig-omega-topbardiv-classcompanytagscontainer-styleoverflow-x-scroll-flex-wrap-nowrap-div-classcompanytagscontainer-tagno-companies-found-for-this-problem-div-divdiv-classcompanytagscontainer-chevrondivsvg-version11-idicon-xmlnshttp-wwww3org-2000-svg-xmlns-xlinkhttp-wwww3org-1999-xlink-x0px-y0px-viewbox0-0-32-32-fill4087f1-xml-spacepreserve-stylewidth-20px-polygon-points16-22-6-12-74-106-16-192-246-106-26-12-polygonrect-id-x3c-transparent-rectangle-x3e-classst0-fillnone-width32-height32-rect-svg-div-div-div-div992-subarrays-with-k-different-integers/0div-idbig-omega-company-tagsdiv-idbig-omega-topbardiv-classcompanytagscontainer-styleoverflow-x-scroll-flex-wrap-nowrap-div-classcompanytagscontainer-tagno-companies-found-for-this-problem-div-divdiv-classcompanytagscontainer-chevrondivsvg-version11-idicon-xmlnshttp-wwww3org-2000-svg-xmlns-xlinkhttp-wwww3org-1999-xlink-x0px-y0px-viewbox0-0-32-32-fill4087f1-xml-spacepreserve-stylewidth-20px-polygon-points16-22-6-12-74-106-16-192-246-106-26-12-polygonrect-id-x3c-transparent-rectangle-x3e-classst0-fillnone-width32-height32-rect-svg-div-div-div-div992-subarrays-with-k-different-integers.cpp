class Solution {
public:
    int solve(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int left=0,right=0,maxi=0;
        while(right<nums.size()){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){mp.erase(nums[left]);}
                left++;
            }
            maxi+=right-left+1;
            right++;
        }
        return maxi;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};