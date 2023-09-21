class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        copy(nums2.begin(),nums2.end(),back_inserter(nums1));
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        for(auto i:nums1){cout<<i<<" ";}
        double med=0.0;
        if(n%2==0){
            med=((double)(nums1[n/2]+nums1[n/2-1]))/(double)2;
        }
        else{
            med=(double)nums1[n/2];
        }
        return med;
    }
};