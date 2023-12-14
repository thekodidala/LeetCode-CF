class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int point=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                point=i;
                break;
            }
        }
        if(point==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[point]){
                    swap(nums[point],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+point+1,nums.end());
        }
        
    }
};