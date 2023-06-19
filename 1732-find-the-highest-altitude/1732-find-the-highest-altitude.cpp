class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int mx=0,high=0;
        for(int i=0;i<n;i++){
            mx+=gain[i];
            high=max(high,mx);
        }
        return high;
    }
};