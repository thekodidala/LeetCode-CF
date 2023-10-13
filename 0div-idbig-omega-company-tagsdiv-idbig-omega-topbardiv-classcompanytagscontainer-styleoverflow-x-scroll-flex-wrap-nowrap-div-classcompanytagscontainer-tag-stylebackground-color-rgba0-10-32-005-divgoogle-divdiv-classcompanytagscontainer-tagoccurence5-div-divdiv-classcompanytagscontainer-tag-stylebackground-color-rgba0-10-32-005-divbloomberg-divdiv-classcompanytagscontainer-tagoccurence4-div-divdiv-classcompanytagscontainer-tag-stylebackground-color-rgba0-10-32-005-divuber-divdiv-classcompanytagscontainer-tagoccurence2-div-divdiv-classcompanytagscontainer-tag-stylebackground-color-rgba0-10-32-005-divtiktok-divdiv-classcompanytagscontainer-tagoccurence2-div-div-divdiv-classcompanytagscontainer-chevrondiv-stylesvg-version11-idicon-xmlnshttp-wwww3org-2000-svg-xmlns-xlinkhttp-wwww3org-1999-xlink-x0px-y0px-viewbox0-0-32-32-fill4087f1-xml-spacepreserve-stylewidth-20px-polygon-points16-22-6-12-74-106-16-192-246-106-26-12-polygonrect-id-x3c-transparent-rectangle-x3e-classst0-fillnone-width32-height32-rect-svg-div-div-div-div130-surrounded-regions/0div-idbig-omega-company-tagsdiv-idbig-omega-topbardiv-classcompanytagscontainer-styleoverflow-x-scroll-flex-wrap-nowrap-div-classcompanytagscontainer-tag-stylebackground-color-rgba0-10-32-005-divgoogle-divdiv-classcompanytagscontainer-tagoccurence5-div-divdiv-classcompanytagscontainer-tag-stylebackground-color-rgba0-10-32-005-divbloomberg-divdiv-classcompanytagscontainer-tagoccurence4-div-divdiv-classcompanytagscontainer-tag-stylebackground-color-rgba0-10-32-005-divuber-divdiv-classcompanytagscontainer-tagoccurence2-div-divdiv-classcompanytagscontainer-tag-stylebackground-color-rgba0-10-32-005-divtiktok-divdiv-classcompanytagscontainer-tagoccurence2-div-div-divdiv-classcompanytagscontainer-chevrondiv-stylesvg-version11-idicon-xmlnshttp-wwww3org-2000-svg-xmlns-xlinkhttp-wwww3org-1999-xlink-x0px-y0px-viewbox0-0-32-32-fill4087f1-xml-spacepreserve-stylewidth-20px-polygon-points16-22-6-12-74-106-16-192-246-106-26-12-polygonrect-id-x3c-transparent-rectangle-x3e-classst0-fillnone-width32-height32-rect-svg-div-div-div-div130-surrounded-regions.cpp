class Solution {
public:
    vector<pair<int,int>>v={{-1,0},{1,0},{0,1},{0,-1}};
    void dfs(int i,int j,vector<vector<int>>&visit,vector<vector<char>>&copy){
        int n=copy.size();
        int m=copy[0].size();
        visit[i][j]=1;
        //copy[i][j]='O';
        for(auto a:v){
            int row=i+a.first;
            int col=j+a.second;
            if(row>=0&&row<n && col>=0 && col<m && copy[row][col]=='O'&&!visit[row][col]){
                dfs(row,col,visit,copy);
            }
        }
        
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        //vector<vector<char>>copy=board;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||i==n-1||j==0||j==m-1)&&!visit[i][j]&&board[i][j]=='O'){
                    dfs(i,j,visit,board);
                }
            }
        }
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(!visit[i][j] &&board[i][j]=='O'){
                    board[i][j]='X';
                    visit[i][j]=1;
                }
            }
        }
    }
};