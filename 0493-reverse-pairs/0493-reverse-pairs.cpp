class Solution {
public:
    void merge(int low,int mid,int high,vector<int>&nums){
        int left=low,right=mid+1;
        vector<int>temp;
        while(left<=mid&&right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    //extra modification for merge sort 
    int pairs(int low,int mid,int high,vector<int>&nums){
        int cnt=0;
        int right=mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high&&nums[i]>(long long)nums[right]*2){right++;}
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    int mergesort(int low,int high,vector<int>&nums){
        int cnt=0;
        if(low>=high)return cnt;
        int mid=(low+high)/2;
        cnt+=mergesort(low,mid,nums);
        cnt+=mergesort(mid+1,high,nums);
        cnt+=pairs(low,mid,high,nums);
        merge(low,mid,high,nums);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        return mergesort(low,high,nums);
    }
};