class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}
        if(nums[n-1]!=nums[n-2]){return nums[n-1];}
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                return nums[i];
            }
        }
        return -1;
    }
};