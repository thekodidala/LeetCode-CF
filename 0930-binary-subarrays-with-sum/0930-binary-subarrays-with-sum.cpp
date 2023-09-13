class Solution {
public:
    //here we calculated all atmost subarrays of sum<=goal and sum<=goal-1
    //subtracting both we will get total subarrays of sum==goal
    //why we are taking all subarrays becoz here 0's also inlcuded sum does not affect so
    int solve(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int left=0,right=0;
        int n=nums.size(),sum=0,cnt=0;
        while(right<n){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            cnt+=(right-left+1);
            right++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal)-solve(nums,goal-1);
    }
};