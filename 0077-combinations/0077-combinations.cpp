class Solution {
public:
    void solve(int ind,int n,int k,vector<int>&board,vector<vector<int>>&ans){
        if(ind==n+1){
            if(board.size()==k)
                ans.push_back(board);
                return;
        }
        solve(ind+1,n,k,board,ans);//not take
        board.push_back(ind);
        solve(ind+1,n,k,board,ans);//take
        board.pop_back();
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>board;
        solve(1,n,k,board,ans);
        return ans;
    }
};