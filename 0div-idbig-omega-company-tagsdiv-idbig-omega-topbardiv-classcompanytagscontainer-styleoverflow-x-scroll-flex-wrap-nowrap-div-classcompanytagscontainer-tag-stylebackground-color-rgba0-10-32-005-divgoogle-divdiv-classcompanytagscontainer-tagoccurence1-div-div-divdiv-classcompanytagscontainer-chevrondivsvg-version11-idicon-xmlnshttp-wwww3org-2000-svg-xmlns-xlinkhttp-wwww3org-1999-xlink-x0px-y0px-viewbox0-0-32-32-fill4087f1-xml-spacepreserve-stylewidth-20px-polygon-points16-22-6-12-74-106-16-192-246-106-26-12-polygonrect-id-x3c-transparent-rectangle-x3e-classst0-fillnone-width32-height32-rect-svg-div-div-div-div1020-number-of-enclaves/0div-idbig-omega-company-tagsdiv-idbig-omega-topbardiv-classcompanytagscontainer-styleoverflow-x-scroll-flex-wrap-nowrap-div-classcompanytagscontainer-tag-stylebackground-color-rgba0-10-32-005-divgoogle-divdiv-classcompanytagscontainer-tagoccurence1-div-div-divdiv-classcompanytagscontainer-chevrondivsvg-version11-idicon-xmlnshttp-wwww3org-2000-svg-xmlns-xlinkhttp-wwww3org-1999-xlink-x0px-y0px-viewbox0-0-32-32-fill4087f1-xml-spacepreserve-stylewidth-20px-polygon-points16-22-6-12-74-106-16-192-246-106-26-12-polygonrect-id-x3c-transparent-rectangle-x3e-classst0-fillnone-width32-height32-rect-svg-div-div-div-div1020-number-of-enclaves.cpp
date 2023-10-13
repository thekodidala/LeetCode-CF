class Solution {
public:
    vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(int i,int j,vector<vector<int>>&visit,vector<vector<int>>&copy){
        int n=copy.size();
        int m=copy[0].size();
        visit[i][j]=1;
        for(auto a:v){
            int row=i+a.first;
            int col=j+a.second;
            if(row>=0&&row<n &&col>=0 &&col<m &&copy[row][col]==1&&!visit[row][col]){
                dfs(row,col,visit,copy);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        vector<vector<int>>copy=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1)&&grid[i][j]==1 &&!visit[i][j]){
                    dfs(i,j,visit,copy);
}
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && copy[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};