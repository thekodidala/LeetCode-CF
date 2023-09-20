class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        int n=nums.size();
        if(sum<x)return -1;
        if(sum==x)return n;
        
        int target=sum-x,left=0,right=0,maxi=0;
        int cursum=0;
        while(right<n){
            cursum+=nums[right];
            while(cursum>target){
                cursum-=nums[left];
                left++;
            }
            if(cursum==target){
                maxi=max(maxi,right-left+1);
            }
            right++;
        }
        return (maxi==0)?-1:n-maxi;
	}
};