class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN,sum=1;
        for(int i=0;i<n;i++){
            sum*=nums[i];
            max1=max(max1,sum);
            if(sum==0){
                sum=1;
            }
        }
        int max2=INT_MIN;
        sum=1;
        for(int i=n-1;i>=0;i--){
            sum*=nums[i];
            max2=max(max2,sum);
            if(sum==0){
                sum=1;
            }
        }
        return max(max1,max2);
    }
};