class Solution {
public:
    int binarysearch(vector<int>&nums,int target,int i,int j){
        int mid=0;
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid]<target){i=mid+1;}
            else if(nums[mid]==target)return mid;
            else j=mid-1;  
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int i=0,n=nums.size()-1,j=n;
        while(nums[i]>nums[j]){
            j--;
        }
        int pivot=j+1,ans=0;
        if(nums[i]>target){
            
            ans=binarysearch(nums,target,pivot,n);
        }
        else{
            ans=binarysearch(nums,target,i,j);
        }
        return ans;
    }
};