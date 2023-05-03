class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>ans1(nums1.begin(),nums1.end());
        unordered_set<int>ans2(nums2.begin(),nums2.end());
        vector<int>v1,v2;
        for(auto x : ans1){
            if(ans2.count(x)==0) v1.push_back(x);
        }
        for(auto x : ans2){
            if(ans1.count(x)==0) v2.push_back(x);
        }
        return {v1,v2};
    }
};