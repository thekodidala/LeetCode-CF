class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int maxi=1,cnt=1;
        
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]+1){
                cnt++;
            }
            else if((i==0)||(nums[i]==nums[i-1])){continue;}
            else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};