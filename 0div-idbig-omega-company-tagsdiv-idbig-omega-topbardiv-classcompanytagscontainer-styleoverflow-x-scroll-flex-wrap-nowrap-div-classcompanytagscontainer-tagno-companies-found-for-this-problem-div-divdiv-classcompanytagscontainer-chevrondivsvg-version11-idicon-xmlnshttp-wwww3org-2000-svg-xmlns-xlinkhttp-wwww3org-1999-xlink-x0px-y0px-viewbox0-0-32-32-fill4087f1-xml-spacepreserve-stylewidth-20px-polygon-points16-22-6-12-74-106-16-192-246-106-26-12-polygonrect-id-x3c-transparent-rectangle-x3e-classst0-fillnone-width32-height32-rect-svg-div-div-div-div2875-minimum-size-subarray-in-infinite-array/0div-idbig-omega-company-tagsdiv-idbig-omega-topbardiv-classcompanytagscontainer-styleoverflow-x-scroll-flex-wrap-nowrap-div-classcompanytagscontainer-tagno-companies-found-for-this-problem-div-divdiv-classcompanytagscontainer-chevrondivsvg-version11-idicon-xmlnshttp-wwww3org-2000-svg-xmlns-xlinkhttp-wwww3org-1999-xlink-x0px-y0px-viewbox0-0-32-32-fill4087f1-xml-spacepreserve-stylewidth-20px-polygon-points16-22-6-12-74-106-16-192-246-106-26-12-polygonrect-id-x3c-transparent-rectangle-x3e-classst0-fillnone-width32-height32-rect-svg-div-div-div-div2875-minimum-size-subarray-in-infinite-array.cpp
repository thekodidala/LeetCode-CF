class Solution {
public:
    //asked in deshaw 
    int minSizeSubarray(vector<int>& nums, int target) {
        int n=nums.size();
        long long sum=0;
        for(auto i:nums){
            sum+=i;
        }
        if(target%sum==0){
            return (target/sum)*n;
        }
        long long rem=(long long)(target/sum)*n;
        target=target-(sum*(target/sum));
        int i=0,j=0,ans=INT_MAX;
        sum=0;
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        n=nums.size();
        while(i<n &&j<n){
            sum+=nums[j];
            while(i<n && sum>target){
                sum-=nums[i];
                i++;
            }
            while(i<n && sum==target){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(ans==INT_MAX){return -1;}
        return ans+rem;
    }
};