class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        int tot=n/3;
        for(auto a:mp){
            if(a.second>tot){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};