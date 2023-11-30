class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board,int ind,string word){
        if(ind==word.size()){
            return true;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[ind]){
            return false;
        }
        //backtracking
        board[i][j]='*';
        bool res=solve(i+1,j,board,ind+1,word)||
                 solve(i-1,j,board,ind+1,word)||
                 solve(i,j+1,board,ind+1,word)||
                 solve(i,j-1,board,ind+1,word);
        board[i][j]=word[ind];
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if(word==""){
            return false;
        }
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && solve(i,j,board,0,word)){
                    return true;
                }
            }
        }
        return false;
    }
};