class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase=0,decrease=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            //int j=i+1;
            if(nums[i]<=nums[i+1]){increase++;}
            if(nums[i]>=nums[i+1]){decrease++;}
        }
        if((increase+1==n)||(decrease+1==n)){return true;}
        return false;
    }
};