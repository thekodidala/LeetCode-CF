class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                bool left=(i==0)||(nums[i-1]==0);
                bool right=(i==n-1)||(nums[i+1]==0);
                if(left && right){
                    nums[i]=1;
                    cnt++;
                }
                if(cnt>=k){return true;}
            }
            
        }
        //cout<<cnt;
        return (cnt>=k);
    }
};