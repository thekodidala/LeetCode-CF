//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&grid,vector<pair<int,int>>&res,int row0,int col0){
        vis[i][j]=1;
        res.push_back({i-row0,j-col0});
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,1,0,0};
        int delcol[]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int nrow=i+delrow[k];
            int ncol=j+delcol[k];
            if(nrow>=0&& nrow<n &&ncol>=0 && ncol<m &&!vis[nrow][ncol]&&grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid,res,row0,col0);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>dis;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>>res;
                    dfs(i,j,vis,grid,res,i,j);
                    dis.insert(res);
                }
            }
        }
        return dis.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends