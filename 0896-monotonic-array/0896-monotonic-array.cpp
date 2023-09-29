class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int increase=0,decrease=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                decrease++;
            }
            if(nums[i]<=nums[i+1]){
                increase++;
            }
        }
        return (increase==n-1||decrease==n-1)?true:false;
    }
};