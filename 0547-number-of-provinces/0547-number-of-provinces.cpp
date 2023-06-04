class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),res=0;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                res++;
                dfs(i,visited,isConnected);
            }
        }
        return res;
    }
    void dfs(int node,vector<bool>&visited,vector<vector<int>>& isConnected){
        visited[node]=true;
        for(int i=0;i<isConnected[0].size();i++){
            if(isConnected[node][i]==1 && !visited[i]){
                dfs(i,visited,isConnected);
            }
        }
    }
};