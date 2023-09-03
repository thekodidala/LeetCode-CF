class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's voting algorithm
        int cnt=0,ele,n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                ele=nums[i];
                cnt=1;
            }
            else if(ele==nums[i]){cnt++;}
            else{cnt--;}
        }
        return ele;
    }
};