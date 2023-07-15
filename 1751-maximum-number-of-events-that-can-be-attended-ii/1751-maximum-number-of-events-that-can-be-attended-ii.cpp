class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<vector<int>>& events,int k,int n,int pos){
        if(pos>=n || k==0){return 0;}
        if(dp[pos][k]!=-1) return dp[pos][k];
        int i;
        vector<int>temp={events[pos][1],INT_MAX,INT_MAX};
        i=upper_bound(events.begin()+pos+1,events.end(),temp)-events.begin();
        return dp[pos][k]=max(solve(dp,events,k,n,pos+1),events[pos][2]+solve(dp,events,k-1,n,i));
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n=events.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        sort(events.begin(),events.end());
        return solve(dp,events,k,n,0);
    }
};