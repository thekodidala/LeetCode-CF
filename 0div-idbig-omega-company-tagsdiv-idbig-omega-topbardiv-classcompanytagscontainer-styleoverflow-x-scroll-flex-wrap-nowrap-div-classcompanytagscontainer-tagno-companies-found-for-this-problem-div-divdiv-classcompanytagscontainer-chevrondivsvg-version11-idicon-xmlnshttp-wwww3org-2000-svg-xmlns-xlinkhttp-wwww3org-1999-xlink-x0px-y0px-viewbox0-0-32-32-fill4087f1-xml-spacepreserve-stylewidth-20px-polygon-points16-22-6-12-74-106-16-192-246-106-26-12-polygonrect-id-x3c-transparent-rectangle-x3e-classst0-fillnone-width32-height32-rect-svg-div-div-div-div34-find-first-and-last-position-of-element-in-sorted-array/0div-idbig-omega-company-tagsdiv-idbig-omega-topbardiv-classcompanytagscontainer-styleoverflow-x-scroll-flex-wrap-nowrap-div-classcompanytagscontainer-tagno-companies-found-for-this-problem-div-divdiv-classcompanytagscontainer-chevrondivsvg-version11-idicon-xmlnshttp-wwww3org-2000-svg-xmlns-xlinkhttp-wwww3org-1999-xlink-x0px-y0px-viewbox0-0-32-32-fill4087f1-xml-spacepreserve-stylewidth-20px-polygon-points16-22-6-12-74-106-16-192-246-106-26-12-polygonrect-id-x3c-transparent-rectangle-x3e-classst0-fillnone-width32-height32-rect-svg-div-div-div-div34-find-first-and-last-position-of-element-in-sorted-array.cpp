class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //lower_bound returns address of first occurence of target
        auto i=lower_bound(nums.begin(),nums.end(),target);
        auto j=upper_bound(nums.begin(),nums.end(),target);
        int first=i-nums.begin();
        int second=j-nums.begin();
        cout<<first<<" "<<second;
        if(first!=second){
            return {first,second-1};
        }
        return {-1,-1};
    }
};