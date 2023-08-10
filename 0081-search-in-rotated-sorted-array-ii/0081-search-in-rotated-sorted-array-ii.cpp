class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            auto it=find(nums.begin(),nums.end(),target);
            if(it!=nums.end()){
                return true;
            }
        }
        return false;
    }
};