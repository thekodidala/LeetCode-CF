class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<2*n;i++){
            if(i<n)
                res.push_back(nums[i]);
            else
                res.push_back(nums[i-n]);
        }
        return res;
    }
};