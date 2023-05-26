class Solution {
public:
    int helper(vector<int>& piles,vector<vector<int>> &dp,const vector<int>& suffixsum,int i,int m){
        if(i==piles.size())return 0;
        if(i+2*m >=piles.size())return suffixsum[i];
        if(dp[i][m]!=0)return dp[i][m];
        int res=0;
        for(int x=1;x<=2*m;x++){
            res=max(res,suffixsum[i]-helper(piles,dp,suffixsum,i+x,max(m,x)));
        }
        dp[i][m]=res;
        return res;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        if(piles.empty())return 0;
        vector<vector<int>> dp(n,vector<int>(n,0));
        vector<int>suffixsum(piles.size());
        suffixsum[n-1]=piles[n-1];
        for(int i=n-2;i>=0;i--)
            suffixsum[i]=piles[i]+suffixsum[i+1];
        return helper(piles,dp,suffixsum,0,1);
    }
};