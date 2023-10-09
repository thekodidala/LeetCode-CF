class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        int i=0;
        while(i<n){
            if(nums[i]==target){
                v.push_back(i);
                break;
            }
            i++;
        }
        int j=n-1;
        while(j>=0){
            if(nums[j]==target){
                v.push_back(j);
                return v;
            }
            j--;
        }
        return {-1,-1};
    }
};