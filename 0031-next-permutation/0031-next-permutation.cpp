class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),a=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                a=i-1;
                break;
            }
        }
            if(a!=-1){
                for(int i=n-1;i>a;i--){
                    if(nums[a]<nums[i]){
                        swap(nums[a],nums[i]);
                        break;
                    }
                }
                sort(nums.begin()+a+1,nums.end());
            }
            else{
                reverse(nums.begin(),nums.end());
            }
        //return nums;
    }
};