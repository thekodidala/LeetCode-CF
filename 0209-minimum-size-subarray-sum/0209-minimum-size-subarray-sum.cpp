class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),j=0,res=INT_MAX,sum=0,count=0,total=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){return 1;}
            total+=nums[i];
            sum+=nums[i];
            count=0;
            while(sum>=target){
                count=i-j+1;
                res=min(count,res);
                sum-=nums[j];
                j++;
            }
        }
        return (total<target)?0:res;
    }
};