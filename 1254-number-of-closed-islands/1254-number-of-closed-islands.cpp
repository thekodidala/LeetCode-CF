class Solution {
public:
    int m,n,count=0;
    bool dfs(int i,int j,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n){
            return false;
        }
        if(grid[i][j]==1){
            return true;
        }
        grid[i][j]=1;
        bool a=dfs(i+1,j,grid),b=dfs(i-1,j,grid),c=dfs(i,j+1,grid),d=dfs(i,j-1,grid);
        return(a && b && c && d);
    }
    int closedIsland(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        if(m==0 || n==0){return 0;}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){      
                    if(dfs(i,j,grid)){count++;}
                }
            }
        }
    return count;
    }
};