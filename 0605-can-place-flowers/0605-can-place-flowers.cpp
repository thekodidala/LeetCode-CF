class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0&&(i==0||nums[i-1]==0)&&(i==n-1||nums[i+1]==0)){
                nums[i]=1;
                cnt++;
            }
            if(cnt>=k){return true;}
        }
        return (cnt>=k);
    }
};