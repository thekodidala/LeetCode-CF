class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        vector<vector<int>>res(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    visit[i][j]=1;
                    q.push({{i,j},0});
                    res[i][j]=0;
                }
                else{
                    visit[i][j]=0;
                }
            }
        }
        vector<pair<int,int>>v={{-1,0},{1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int cnt=q.front().second;
            res[row][col]=cnt;
            q.pop();
            for(auto i:v){
                int nrow=row+i.first;
                int ncol=col+i.second;
                if(nrow>=0 &&nrow<n && ncol>=0 && ncol<m &&visit[nrow][ncol]==0){
                    q.push({{nrow,ncol},cnt+1});
                    visit[nrow][ncol]=1;
                    
}
            }
        }
        return res;
    }
};