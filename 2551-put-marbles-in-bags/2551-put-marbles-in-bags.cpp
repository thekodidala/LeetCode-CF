class Solution {
public:
#define ll long long
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        ll mx=0,mn=0;
        vector<int>v;
        for(int i=0;i<n-1;i++){
            v.push_back(weights[i]+weights[i+1]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k-1;i++){
            mn+=v[i];
            mx+=v[n-2-i];
        }
        return mx-mn;
    }
};