class Solution {
public:
    int countpairs(vector<int>& nums,int target){
        int ind=0,cnt=0;
        while(ind < (nums.size()-1)){
            if(nums[ind+1]-nums[ind]<=target){
                cnt++;
                ind++;
            }
            ind++;
        }
        return cnt;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0,right=nums[n-1]-nums[0];
        while(left<right){
            int mid=left+(right-left)/2;
            if(countpairs(nums,mid)>=p){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};