class Solution {
public:
    //Greedy problem which has solved using peak and valley intution
    int candy(vector<int> &nums) {
        int n=nums.size();
        int candy=n,i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int peak=0;
            //increasing
            while(i<n&&nums[i]>nums[i-1]){
                i++;
                peak++;
                candy+=peak;
            }
            if(i==n)return candy;
            //decreasing
            int valley=0;
            while(i<n&&nums[i]<nums[i-1]){
                i++;
                valley++;
                candy+=valley;
            }
            candy-=min(valley,peak);
        }
        return candy;
    }
};