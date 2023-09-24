class Solution {
    double dp[100][100];
public:
    
    double solve(int r,int g){
        if(r<0 || g<0){
            return 0.0;
        }
        if(dp[r][g]!=-1.0){
            return dp[r][g];
        }
        if(g==0){
            dp[r][g]=max(0.0,solve(r-1,g)-1.0)/2.0;
        }
        else if(g==r){
            dp[r][g]=max(0.0,solve(r-1,g-1)-1.0)/2.0;
        }
        else{
            dp[r][g]=(max(0.0,solve(r-1,g)-1.0)+max(0.0,solve(r-1,g-1)-1.0))/2.0;
        }
        return dp[r][g];
        
    }
    double champagneTower(int poured, int query_row, int query_glass) {
        //vector<vector<double>>dp(101,vector<int>(101,-1.0));
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                dp[i][j]=-1.0;
            }
        }
        dp[0][0]=(double)poured;
        return min(1.0,solve(query_row,query_glass));
    }
};