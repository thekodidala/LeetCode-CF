class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=INT_MIN,ele2=INT_MIN;
        int cnt1=0,cnt2=0;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=ele2){
                cnt1++;
                ele1=nums[i];
            }
            else if(cnt2==0 &&nums[i]!=ele1){
                cnt2++;
                ele2=nums[i];
            }
            else if(nums[i]==ele1){
                cnt1++;
            }
            else if(nums[i]==ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){cnt1++;}
            else if(nums[i]==ele2){cnt2++;}
        }
        if(cnt1>n/3){v.push_back(ele1);}
        if(cnt2>n/3){v.push_back(ele2);}
        return v;
    }
};