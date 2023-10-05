//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<pair<int,int>>v={{-1,0},{1,0},{0,1},{0,-1}};
    void dfs(int sr,int sc,int prev,vector<vector<int>>&img,int color,vector<vector<int>>&image){
        img[sr][sc]=color;
        int n=img.size();
        int m=img[0].size();
        for(auto list:v){
            int r=sr+list.first;
            int c=sc+list.second;
            if(r>=0 && r<n && c>=0 && c<m && image[r][c]==prev &&img[r][c]!=color){
                //img[r][c]=color;
                dfs(r,c,prev,img,color,image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>img=image;
        int prev=img[sr][sc];
        dfs(sr,sc,prev,img,newColor,image);
        return img;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends