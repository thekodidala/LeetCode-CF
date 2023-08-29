class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        //sliding window problem
        //formula j-i+1 to get size
        long sum=0;
        int i=0,maxi=0;
        sort(nums.begin(),nums.end());
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum+k<(long)(j-i+1)*nums[j]){
                sum-=nums[i];
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};