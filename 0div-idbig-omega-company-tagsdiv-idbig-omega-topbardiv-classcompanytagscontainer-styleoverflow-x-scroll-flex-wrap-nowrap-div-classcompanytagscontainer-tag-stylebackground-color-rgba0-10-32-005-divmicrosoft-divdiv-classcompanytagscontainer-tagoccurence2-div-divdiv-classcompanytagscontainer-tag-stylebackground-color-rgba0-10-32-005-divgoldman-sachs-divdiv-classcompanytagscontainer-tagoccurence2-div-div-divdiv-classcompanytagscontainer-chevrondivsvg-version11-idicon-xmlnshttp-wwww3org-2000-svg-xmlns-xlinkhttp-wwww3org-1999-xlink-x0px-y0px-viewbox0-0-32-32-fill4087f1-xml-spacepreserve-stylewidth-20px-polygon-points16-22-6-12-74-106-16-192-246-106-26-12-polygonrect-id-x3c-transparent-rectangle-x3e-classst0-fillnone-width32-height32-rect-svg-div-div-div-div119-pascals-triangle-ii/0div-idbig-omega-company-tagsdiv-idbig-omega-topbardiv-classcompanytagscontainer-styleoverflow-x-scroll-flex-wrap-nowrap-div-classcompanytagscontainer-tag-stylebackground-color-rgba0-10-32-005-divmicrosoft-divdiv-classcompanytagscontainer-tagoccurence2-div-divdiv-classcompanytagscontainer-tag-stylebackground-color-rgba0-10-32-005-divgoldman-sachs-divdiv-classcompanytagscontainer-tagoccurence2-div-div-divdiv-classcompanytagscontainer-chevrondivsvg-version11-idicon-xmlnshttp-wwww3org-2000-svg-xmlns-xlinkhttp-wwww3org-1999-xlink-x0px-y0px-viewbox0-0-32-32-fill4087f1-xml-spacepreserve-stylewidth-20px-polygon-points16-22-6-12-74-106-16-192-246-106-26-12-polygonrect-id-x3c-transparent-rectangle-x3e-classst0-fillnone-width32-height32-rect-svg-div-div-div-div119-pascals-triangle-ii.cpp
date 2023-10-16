class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector<int>>v(row+1,vector<int>(row+1,0));
        for(int i=0;i<=row;i++){
            v[i].resize(i+1);
            for(int j=0;j<v[i].size();j++){
                if(j==0 ||j==i){
                    v[i][j]=1;
                }
                else if(j>0 && j<v[i].size()-1){
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
                }
                else if(i>0 && j==v[i].size()-1){
                    v[i][j]=1;
                }
            }
        }
        // vector<int>res(row,0);
        // for(int i=0;i<=row;i++){
        //     res[i]=v[row][i];
        // }
        return v[row];
    }
};