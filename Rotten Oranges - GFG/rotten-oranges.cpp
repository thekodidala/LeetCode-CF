//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges.
    vector<pair<int,int>>v={{1,0},{-1,0},{0,-1},{0,1}};
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int cnt=0;
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visit[i][j]=2;
                }
                else if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        int ans=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            q.pop();
            ans=max(t,ans);
            for(auto a:v){
                int cr=row+a.first;
                int cc=col+a.second;
                if(cr>=0 && cr<n && cc>=0 && cc<m && grid[cr][cc]==1 && visit[cr][cc]==0){
                    visit[cr][cc]=2;
                    q.push({{cr,cc},t+1});
                    cnt--;
                }
            }
        }
        return (cnt==0)?ans:-1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends