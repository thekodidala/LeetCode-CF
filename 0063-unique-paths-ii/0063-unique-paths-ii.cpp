class Solution {
public:
    int countpaths(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& grid,int m,int n){
        if(i==m-1&&j==n-1&&grid[i][j]==0){return 1;}
        if(i>m-1||j>n-1 || grid[i][j]==1){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int left,up;
        left=countpaths(i,j+1,dp,grid,m,n);
        up=countpaths(i+1,j,dp,grid,m,n);
        return dp[i][j]=left+up;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        //if(m==1||n==1){return 0;}
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return countpaths(0,0,dp,obstacleGrid,m,n);
    }
};