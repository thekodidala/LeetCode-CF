bool compareSecondElement(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end(),compareSecondElement);
        for(auto a:intervals){
        cout<<a[0]<<a[1]<<endl;
        }
        int ans=0,k=INT_MIN;
        for(auto v:intervals){
            if(v[0]>=k){
                k=v[1];
            }
            else{
                ans++;
            }
        }
    return ans;
    }
};