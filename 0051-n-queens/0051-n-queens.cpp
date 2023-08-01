class Solution {
public:
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n,vector<int>&left,vector<int>&lowerdia,vector<int>&upperdia){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0&&lowerdia[row+col]==0&&upperdia[(n-1)+(col-row)]==0){
                board[row][col]='Q';
                left[row]=1;
                lowerdia[row+col]=1;
                upperdia[(n-1)+(col-row)]=1;
                solve(col+1,board,ans,n,left,lowerdia,upperdia);
                board[row][col]='.';
                left[row]=0;
                lowerdia[row+col]=0;
                upperdia[(n-1)+(col-row)]=0;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        //hashing is used instead of using 3 while loops for checking whether queen is present or not in the previous row and cols 
        vector<int>left(n,0),lowerdia(2*n-1,0),upperdia(2*n-1,0);
        solve(0,board,ans,n,left,lowerdia,upperdia);
        return ans;
    }
};