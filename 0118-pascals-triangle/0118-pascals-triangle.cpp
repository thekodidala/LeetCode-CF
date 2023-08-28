class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>v(num);
        for(int i=0;i<num;i++){
            v[i].resize(i+1);
            v[i][0]=1;
            if(i>1){
                for(int j=1;j<=i-1;j++){
                    int sum=v[i-1][j-1]+v[i-1][j];
                    v[i][j]=sum;
                }
            }
            if(i>0){
                v[i][i]=1;
            }
        }
        return v;
    }
};