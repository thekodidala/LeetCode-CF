class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MIN,start=nums[0];
        mini=start;
        for(int i=1;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
                break;
            }
        }
        return mini;
    }
};