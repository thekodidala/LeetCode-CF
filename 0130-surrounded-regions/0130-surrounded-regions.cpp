class Solution {
public:
    int m,n;
    void dfs(int i,int j,vector<vector<char>>& board){
        if(i>=m||j>=n||i<0||j<0||board[i][j]=='X'||board[i][j]=='#'){return;}
        board[i][j]='#';
        dfs(i+1,j,board);
        dfs(i-1,j,board);
        dfs(i,j+1,board);
        dfs(i,j-1,board);
        return;
    }
    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();
        if(m==0 || n==0){return;}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 ||i==m-1||j==0||j==n-1){
                    dfs(i,j,board);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
        return;
    }
};