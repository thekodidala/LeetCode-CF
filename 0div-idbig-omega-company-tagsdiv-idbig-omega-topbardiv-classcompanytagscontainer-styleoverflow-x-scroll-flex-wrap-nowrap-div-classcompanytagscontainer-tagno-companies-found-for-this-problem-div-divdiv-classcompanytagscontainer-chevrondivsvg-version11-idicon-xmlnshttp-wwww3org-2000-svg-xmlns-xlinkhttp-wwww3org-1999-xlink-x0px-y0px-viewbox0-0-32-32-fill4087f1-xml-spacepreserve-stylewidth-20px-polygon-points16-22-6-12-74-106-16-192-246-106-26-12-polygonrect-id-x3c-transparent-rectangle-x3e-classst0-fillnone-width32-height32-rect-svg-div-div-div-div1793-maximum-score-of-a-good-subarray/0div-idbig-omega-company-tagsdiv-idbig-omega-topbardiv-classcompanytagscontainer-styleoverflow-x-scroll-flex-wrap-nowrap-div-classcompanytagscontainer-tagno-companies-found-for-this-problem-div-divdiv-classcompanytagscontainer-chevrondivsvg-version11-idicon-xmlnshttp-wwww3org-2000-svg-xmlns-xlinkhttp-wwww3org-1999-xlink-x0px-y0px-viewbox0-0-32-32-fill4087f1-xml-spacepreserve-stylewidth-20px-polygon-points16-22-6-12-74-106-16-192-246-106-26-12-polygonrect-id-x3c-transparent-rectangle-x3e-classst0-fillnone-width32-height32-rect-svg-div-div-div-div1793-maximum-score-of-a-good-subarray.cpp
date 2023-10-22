class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        //two pointer
        int n=nums.size();
        int ans=nums[k],cur=nums[k];
        int l=k,r=k;
        while(l>0 || r<n-1){
            if((l>0?nums[l-1]:0)>(r<n-1?nums[r+1]:0)){
                l--;
                cur=min(cur,nums[l]);
            }
            else{
                r++;
                cur=min(cur,nums[r]);
            }
            ans=max(ans,cur*(r-l+1));
        }
        return ans;
    }
};