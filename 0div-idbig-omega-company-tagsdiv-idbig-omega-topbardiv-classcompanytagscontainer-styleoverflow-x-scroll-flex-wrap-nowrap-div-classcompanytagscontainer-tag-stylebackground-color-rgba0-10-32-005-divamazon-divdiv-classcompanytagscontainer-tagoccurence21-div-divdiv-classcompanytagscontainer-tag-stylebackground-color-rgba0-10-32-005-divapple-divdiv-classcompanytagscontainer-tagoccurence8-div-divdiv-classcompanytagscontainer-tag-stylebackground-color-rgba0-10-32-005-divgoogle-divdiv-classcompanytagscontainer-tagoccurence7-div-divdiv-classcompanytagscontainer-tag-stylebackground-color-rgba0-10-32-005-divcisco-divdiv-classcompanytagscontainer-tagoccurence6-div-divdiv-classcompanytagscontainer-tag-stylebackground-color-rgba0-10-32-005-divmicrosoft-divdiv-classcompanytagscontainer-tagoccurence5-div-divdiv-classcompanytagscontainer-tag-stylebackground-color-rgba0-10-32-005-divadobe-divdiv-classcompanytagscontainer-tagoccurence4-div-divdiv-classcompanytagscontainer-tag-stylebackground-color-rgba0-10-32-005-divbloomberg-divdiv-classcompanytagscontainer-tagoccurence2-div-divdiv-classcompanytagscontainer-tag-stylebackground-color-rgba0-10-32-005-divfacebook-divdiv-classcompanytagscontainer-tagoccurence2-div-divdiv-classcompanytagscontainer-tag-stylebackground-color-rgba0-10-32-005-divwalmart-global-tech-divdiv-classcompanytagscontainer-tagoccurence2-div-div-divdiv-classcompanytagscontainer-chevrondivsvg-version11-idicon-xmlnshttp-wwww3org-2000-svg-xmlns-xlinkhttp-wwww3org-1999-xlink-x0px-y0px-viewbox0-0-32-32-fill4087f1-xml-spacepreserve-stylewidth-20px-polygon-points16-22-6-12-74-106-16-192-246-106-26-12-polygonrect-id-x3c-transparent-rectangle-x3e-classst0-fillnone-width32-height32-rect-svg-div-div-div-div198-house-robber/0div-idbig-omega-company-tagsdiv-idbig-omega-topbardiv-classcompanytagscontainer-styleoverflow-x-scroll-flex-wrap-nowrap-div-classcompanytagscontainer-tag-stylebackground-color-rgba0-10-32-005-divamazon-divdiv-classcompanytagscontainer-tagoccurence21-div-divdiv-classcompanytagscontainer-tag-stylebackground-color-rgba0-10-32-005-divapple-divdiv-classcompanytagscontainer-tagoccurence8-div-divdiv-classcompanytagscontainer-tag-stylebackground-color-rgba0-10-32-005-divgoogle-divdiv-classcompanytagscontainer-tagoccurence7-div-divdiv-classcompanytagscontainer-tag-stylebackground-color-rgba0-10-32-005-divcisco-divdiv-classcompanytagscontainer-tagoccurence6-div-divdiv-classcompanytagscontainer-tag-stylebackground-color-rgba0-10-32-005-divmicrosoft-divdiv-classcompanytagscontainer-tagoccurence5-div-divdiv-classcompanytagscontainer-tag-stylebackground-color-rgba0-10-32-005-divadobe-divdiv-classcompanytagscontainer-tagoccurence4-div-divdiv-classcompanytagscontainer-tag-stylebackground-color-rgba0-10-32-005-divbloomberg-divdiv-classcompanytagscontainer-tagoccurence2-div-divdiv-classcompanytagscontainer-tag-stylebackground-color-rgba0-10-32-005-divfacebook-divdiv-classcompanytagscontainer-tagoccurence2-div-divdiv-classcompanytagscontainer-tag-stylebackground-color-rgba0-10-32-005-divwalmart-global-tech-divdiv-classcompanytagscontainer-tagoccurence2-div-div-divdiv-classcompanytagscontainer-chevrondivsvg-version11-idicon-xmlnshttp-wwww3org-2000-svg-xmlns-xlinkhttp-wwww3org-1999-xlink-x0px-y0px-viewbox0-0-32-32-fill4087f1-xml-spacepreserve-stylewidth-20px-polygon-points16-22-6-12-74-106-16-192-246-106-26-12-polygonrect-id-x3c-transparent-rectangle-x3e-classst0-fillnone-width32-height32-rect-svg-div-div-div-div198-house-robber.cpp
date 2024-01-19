class Solution {
public:
    //interesting dp problem solved using tabulation (bottom up) approach
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0],prev2=0;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            pick+=prev2;
            int notpick=0+prev;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};