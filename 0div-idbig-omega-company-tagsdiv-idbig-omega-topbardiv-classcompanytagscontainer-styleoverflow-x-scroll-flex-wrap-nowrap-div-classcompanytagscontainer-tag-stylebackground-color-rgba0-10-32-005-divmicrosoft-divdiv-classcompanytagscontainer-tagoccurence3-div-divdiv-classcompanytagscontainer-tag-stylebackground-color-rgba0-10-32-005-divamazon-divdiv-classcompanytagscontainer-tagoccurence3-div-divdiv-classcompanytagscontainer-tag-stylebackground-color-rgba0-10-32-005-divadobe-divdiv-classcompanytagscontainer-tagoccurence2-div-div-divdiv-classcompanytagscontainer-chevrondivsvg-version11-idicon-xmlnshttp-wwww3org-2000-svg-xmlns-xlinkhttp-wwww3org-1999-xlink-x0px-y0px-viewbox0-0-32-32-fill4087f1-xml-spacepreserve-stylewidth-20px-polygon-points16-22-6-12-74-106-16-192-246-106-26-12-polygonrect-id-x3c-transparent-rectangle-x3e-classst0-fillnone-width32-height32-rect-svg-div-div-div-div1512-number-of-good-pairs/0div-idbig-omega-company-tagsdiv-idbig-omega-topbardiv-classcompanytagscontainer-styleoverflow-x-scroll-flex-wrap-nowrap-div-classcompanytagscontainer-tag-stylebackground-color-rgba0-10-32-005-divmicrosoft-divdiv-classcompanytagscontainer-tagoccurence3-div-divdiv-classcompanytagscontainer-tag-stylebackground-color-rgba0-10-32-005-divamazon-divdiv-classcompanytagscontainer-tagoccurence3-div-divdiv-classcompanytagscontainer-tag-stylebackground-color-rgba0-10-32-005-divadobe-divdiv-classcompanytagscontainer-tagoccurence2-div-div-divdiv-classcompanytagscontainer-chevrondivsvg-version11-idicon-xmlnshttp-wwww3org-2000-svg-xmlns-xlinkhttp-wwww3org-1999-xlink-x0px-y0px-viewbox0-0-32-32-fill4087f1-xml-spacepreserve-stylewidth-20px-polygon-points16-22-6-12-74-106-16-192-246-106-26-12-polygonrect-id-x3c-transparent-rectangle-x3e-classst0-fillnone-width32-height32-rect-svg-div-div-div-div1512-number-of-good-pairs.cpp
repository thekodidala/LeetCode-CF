class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        unordered_map<int,int>mp;
        for(auto i:nums){
            cnt+=mp[i];
            mp[i]++;
        }
        return cnt;
    }
};