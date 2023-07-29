class Solution {
public:
    int total(int i1,int j1,int j2,vector<vector<vector<int>>>&dp,vector<vector<int>>& grid,int n){
        int i2=i1+j1-j2;
        if(i1==n||j1==n||i2==n||j2==n ||grid[i1][j1]==-1||grid[i2][j2]==-1){return -1e5;}
        else if(i1==n-1 && j1==n-1){
            return grid[i1][j1];
            //else{return grid[i1][j1]+grid[i2][j2];}
        }
        else if(dp[i1][j1][j2]!=-1){return dp[i1][j1][j2];}
        int maxi=0;
        int value=0;
        if(j1==j2){
            value=grid[i1][j1];
        }
        else{
            value=grid[i1][j1]+grid[i2][j2];
        }
        int a=value+total(i1+1,j1,j2,dp,grid,n);
        
        int b=value+total(i1,j1+1,j2,dp,grid,n);
        
        int c=value+total(i1+1,j1,j2+1,dp,grid,n);
        
        int d=value+total(i1,j1+1,j2+1,dp,grid,n);
        maxi=max(max(a,b),max(c,d));
        //maxi=max(maxi,value);
        return dp[i1][j1][j2]=maxi;
    }
    
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        //dp[m][n][n];
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(n,-1)));
        return max(0,total(0,0,0,dp,grid,n));
    }
};