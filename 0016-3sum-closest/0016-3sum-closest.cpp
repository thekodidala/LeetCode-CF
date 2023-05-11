class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<3)return 0;
        sort(nums.begin(),nums.end());
        int res=INT_MAX,ans=0;
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==target){return target;}
                else if(abs(nums[i]+nums[j]+nums[k]-target)<res){
                    res=abs(nums[i]+nums[j]+nums[k]-target);
                    ans=nums[i]+nums[j]+nums[k];
                }
            if(nums[i]+nums[j]+nums[k]>target){k--;}
            else{j++;}
            }
        }
        return ans;
    }
};