class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                if(sum==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};