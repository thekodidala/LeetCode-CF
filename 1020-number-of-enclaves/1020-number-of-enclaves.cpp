class Solution {
public:
    int n,m,count=0;
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
        return;}
        grid[i][j]=0;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i,j+1,grid);
        return;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        if(m==0 || n==0){return count;}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    dfs(i,j,grid);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count+=1;
                }
            }
        }
        return count;
    }
};