class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>v(num,vector<int>(num,0));
        for(int i=0;i<num;i++){
            v[i].resize(i+1);
            for(int j=0;j<v[i].size();j++){
                if(j==0 || j==i){
                    v[i][j]=1;
                }
                //else(j>0&&j<v[i].size()-1){
                else{
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
                }
                // else if(i>0&&j==v[i].size()-1){
                //     v[i][j]=1;
                // }
            }   
        }
        return v;
    }
};