class Solution {
public:
    /*int countpaths(int i,int j,vector<vector<int>>&dp){
        if(i==0&&j==0){return 1;}
        if(i<0||j<0){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int left,up;
        left=countpaths(i,j-1,dp);
        up=countpaths(i-1,j,dp);
        return dp[i][j]=left+up;
    }*/
    //solved using combinations
    int uniquePaths(int m, int n) {
        //there are total m-1 and n-1 moves to reach goal state
        int N=m+n-2;
        int r=m-1;
        long long res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return res;
    }
};