class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        int sum=1,s=1,cnt=0;
        for(int i=0;i<n;i++){
            sum*=nums[i];
            if(nums[i]==0){
                cnt++;
                if(cnt>1){return vector<int>(n,0);}
                continue;
            }
            s*=nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[i]=s;
            }
            else{
                ans[i]=sum/nums[i];
            }
        }
        return ans;
    }
};