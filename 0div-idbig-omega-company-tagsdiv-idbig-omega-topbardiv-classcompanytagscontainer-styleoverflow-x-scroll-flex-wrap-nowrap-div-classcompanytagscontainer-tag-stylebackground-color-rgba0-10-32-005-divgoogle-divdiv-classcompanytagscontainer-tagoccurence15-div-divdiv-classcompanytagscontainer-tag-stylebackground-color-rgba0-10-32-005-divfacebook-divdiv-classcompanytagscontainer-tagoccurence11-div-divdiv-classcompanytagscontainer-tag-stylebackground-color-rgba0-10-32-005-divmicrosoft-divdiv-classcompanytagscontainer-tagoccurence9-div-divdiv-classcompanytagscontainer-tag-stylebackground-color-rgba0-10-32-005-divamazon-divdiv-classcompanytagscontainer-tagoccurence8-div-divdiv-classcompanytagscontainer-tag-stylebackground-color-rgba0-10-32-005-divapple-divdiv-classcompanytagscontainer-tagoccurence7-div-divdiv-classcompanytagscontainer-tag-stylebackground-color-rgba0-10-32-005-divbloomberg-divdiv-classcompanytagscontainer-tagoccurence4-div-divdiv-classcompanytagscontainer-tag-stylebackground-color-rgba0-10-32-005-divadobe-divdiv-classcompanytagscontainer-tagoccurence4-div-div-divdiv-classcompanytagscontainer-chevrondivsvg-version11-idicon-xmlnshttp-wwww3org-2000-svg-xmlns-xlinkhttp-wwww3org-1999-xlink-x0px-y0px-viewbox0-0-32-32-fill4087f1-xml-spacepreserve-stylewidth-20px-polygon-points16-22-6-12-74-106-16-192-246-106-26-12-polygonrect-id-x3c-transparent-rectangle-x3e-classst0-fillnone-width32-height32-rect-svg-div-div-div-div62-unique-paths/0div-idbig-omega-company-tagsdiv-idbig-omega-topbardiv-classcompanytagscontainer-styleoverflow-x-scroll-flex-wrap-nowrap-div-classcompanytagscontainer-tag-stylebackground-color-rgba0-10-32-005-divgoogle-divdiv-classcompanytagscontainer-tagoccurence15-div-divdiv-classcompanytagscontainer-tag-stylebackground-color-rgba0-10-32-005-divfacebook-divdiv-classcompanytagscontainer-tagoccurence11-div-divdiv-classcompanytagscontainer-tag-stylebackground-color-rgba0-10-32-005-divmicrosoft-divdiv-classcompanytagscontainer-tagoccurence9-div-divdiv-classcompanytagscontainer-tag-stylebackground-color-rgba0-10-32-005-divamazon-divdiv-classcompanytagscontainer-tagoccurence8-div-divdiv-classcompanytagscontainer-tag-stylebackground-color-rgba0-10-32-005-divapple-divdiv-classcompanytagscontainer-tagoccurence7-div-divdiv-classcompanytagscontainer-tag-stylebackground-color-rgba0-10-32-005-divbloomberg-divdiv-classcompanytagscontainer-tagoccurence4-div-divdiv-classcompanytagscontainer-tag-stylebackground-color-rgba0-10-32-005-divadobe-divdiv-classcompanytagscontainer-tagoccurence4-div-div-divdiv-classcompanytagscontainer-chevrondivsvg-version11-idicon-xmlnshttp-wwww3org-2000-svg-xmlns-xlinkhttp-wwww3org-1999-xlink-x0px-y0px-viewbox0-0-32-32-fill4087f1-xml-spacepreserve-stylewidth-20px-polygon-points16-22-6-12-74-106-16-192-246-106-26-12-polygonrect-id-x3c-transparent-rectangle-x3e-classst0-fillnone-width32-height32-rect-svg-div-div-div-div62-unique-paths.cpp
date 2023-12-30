class Solution {
public:
    int unique(int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i>m || j>n)return 0;
        if(i==m &&j==n)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        int cnt=0;
        cnt+=unique(i+1,j,m,n,dp);
        cnt+=unique(i,j+1,m,n,dp);
        return dp[i][j]=cnt;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int res=unique(0,0,m-1,n-1,dp);
        return res;
    }
};