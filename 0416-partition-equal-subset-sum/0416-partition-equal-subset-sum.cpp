class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalsum=0,n=nums.size();
        for(int i=0;i<n;i++){totalsum+=nums[i];}
        if(totalsum%2)return false;
        int target=totalsum/2;
        vector<bool>prev(target+1,0),cur(target+1,0);
        prev[0]=cur[0]=true;
        if(nums[0]<=target)prev[nums[0]]=true;
        
        for(int ind=1;ind<n;ind++){
            for(int tar=1;tar<=target;tar++){
                bool nottake=prev[tar];
                bool take=false;
                if(tar>=nums[ind]){
                    take=prev[tar-nums[ind]];
                }
                cur[tar]=nottake||take;
            }
            prev=cur;
        }
        return prev[target];
    }
};