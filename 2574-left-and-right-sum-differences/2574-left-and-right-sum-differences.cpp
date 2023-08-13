class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum,rightsum;
        int left=0,tsum=0;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
            leftsum.push_back(left);
            left+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            tsum-=nums[i];
            rightsum.push_back(tsum);
        }
        for(int j=0;j<nums.size();j++){
            nums[j]=abs(leftsum[j]-rightsum[j]);     
        }
        return nums;
    }
};