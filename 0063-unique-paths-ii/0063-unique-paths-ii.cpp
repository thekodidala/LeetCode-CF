class Solution {
public:
    int countpaths(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& grid){
        if(i==0&&j==0&&grid[i][j]==0){return 1;}
        if(i<0||j<0 || grid[i][j]==1){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int left,up;
        left=countpaths(i,j-1,dp,grid);
        up=countpaths(i-1,j,dp,grid);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        //if(m==1||n==1){return 0;}
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return countpaths(m-1,n-1,dp,obstacleGrid);
    }
};