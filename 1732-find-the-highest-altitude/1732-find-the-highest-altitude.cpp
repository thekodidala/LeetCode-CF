class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v(n,0);
        int mx=0,high=0;
        for(int i=0;i<n;i++){
            mx+=gain[i];
            v[i]=mx;
            high=max(high,mx);
        }
        return (high>0)?high:0;
    }
};