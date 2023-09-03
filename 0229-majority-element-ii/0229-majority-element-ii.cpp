class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //boyer moore's voting algo
        int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0&&nums[i]!=ele2){
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0&&nums[i]!=ele1){
                cnt2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1){cnt1++;}
            else if(nums[i]==ele2){cnt2++;}
            else{
                cnt1--;
                cnt2--;
            }
        }
        int c1=0,c2=0;
        for(int j=0;j<n;j++){
            if(nums[j]==ele1){c1++;}
            else if(nums[j]==ele2){c2++;}
        }
        int tot=n/3;
        vector<int>v;
        if(c1>tot){v.push_back(ele1);}
        if(c2>tot){v.push_back(ele2);}
        return v;
    }
};