class Solution {
public:
    int minsum(int i,int j,vector<vector<int>>& arr,vector<vector<int>>& dp,int n){
        if(i==n-1){return arr[n-1][j];}
        //if(j>=n){return 1e9;}
        if(dp[i][j]!=-1)return dp[i][j];
        int down=arr[i][j]+minsum(i+1,j,arr,dp,n);
        int dia=arr[i][j]+minsum(i+1,j+1,arr,dp,n);
        return dp[i][j]=min(down,dia);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        return minsum(0,0,triangle,dp,m);
    }
};