class Solution {
public:
    int solve(vector<int>&temp, int k){
        if(k<0)return 0;
        int left=0,right=0,n=temp.size();
        int sum=0,res=0;
        while(right<n){
            sum+=temp[right];
            while(sum>k){
                sum-=temp[left];
                left++;
            }
            res+=(right-left+1);
            right++;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2){temp[i]=1;}
            else{temp[i]=0;
                cnt++;}
        }
        if(cnt==n)return 0;
        return solve(temp,k)-solve(temp,k-1);
    }
};